package blob;

import PreparedStatement.bean.Customer;
import org.junit.Test;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.sql.*;

import static PreparedStatement.JDBCUtils.utils.closeResource;
import static PreparedStatement.JDBCUtils.utils.getConnection;

public class blobTest {
    //添加
    @Test
    public void test() {
        Connection conn = null;
        PreparedStatement ps = null;
        try {
            conn = getConnection();
            String sql = "insert into customer(customer_name,customer_age,customer_photo)value (?,?,?)";
            ps = conn.prepareStatement(sql);

            ps.setObject(1, "小明");
            ps.setObject(2, 18);
            FileInputStream fis = new FileInputStream("src/blob/xiaoming.jpeg");
            ps.setBlob(3, fis);

            ps.execute();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            closeResource(conn, ps);
        }

    }

    //查找
    @Test
    public void test1() throws SQLException, IOException, ClassNotFoundException {
        Connection conn = null;
        PreparedStatement ps = null;
        ResultSet rs = null;
        InputStream is = null;
        FileOutputStream fos = null;
        try {
            conn = getConnection();
            String sql = "select customer_id id,customer_name name,customer_age age,customer_photo photo from customer where customer_name = ?";
            ps = conn.prepareStatement(sql);

            ps.setObject(1, "小明");

            rs = ps.executeQuery();

            if (rs.next()) {
                int id = rs.getInt("id");
                String name = rs.getString("name");
                int age = rs.getInt("age");
                Blob photo = rs.getBlob("photo");

                Customer customer = new Customer(id, name, age);
                is = photo.getBinaryStream();
                fos = new FileOutputStream("src/blob/getxiaoming.jpeg");

                byte[] buffer = new byte[1024];
                int len;
                while((len = is.read(buffer)) != -1){
                    fos.write(buffer, 0, len);
                }

                System.out.println(customer);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            closeResource(conn, ps, rs);

            try {
                if(is != null)
                    is.close();
            } catch (IOException e) {
                e.printStackTrace();
            }

            try {
                if(fos != null)
                    fos.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

    }
}
