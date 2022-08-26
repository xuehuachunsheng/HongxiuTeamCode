# coding:utf-8
import os
from flask import Flask,render_template,request,redirect,url_for
from werkzeug.utils import secure_filename
from controllers.classifier import _classifier_

app = Flask(__name__)

@app.route('/upload', methods=['POST', 'GET'])
def upload():
    if request.method == 'POST':
        f = request.files['file']
        basepath = os.path.dirname(__file__)  # 当前文件所在路径
        # 注意：没有的文件夹一定要先创建，不然会提示没有该路径
        upload_path = os.path.join(basepath, 'static/uploads', secure_filename(f.filename))
        f.save(upload_path)
        return redirect(url_for('upload'))
    return render_template('upload.html')

@app.route('/test', methods=['POST','GET'])
def test():
    if request.method == 'POST':
        f = request.files['file']
        basepath = os.path.dirname(__file__)  # 当前文件所在路径
        # 注意：没有的文件夹一定要先创建，不然会提示没有该路径
        upload_path = os.path.join(basepath, 'static/uploads', secure_filename(f.filename))
        f.save(upload_path)
        ## 保存图像之后，在这里进行图像识别
        mainclazz_name, subclazz_name = _classifier_.classify_by_imgpath(upload_path)
        #return redirect(url_for('test'))
        return render_template('upload_ok.html', fname=f.filename, subclazz=subclazz_name, mainclazz=mainclazz_name)
        return render_template('yxm_code.html')
if __name__ == '__main__':
    app.run(debug=True)
