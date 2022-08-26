import jieba
import matplotlib.pyplot as plt
from wordcloud import WordCloud,STOPWORDS,ImageColorGenerator
text = ""
fin = open(r"data.txt","r")
for line in fin.readlines():
    line = line.strip("\n")
test+=" ".join(jieba.cut(line))
backgroud_Image = plt.imread(r"background.jpg")
wc = WordCloud(
    background_color = "white",
    mask = background_Image,
    font_path = r"C:\Windows\Fonts\SimHei.ttf",
    max_words=100,
    stopwords = STOPWORDS,
    max_font_size = 400,
    random_state=15
)
wc.generate_from_text(text)
wc.recolor(color_func=ImageColorGenerator(backgroud_Image))
plt.imshow(wc)
plt.axis("off")
plt.show()
