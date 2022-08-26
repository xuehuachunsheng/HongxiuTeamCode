package PreparedStatement;

import org.junit.Test;

import java.io.IOException;
import java.io.InputStream;
import java.sql.*;
import java.text.SimpleDateFormat;
import java.util.Properties;

import static PreparedStatement.JDBCUtils.utils.closeResource;
import static PreparedStatement.JDBCUtils.utils.getConnection;

public class PreparedStatementTest {
    /**
     * 除了解决Statement的拼串、sql问题之外，PreparedStatement还有哪些好处呢？
     * 1.PreparedStatement操作Blob的数据，而Statement做不到。
     * 2.PreparedStatement可以实现更高效的批量操作。
     */

    @Test
    public void testemUpdate() {
        String sql = "delete from employee where name = ?";
        upDate(sql, "哪吒");

//        String sql = "update `order` set order_name = ? where order_id = ?";
//        upDate(sql,"DD","2");

    }

    //增删改的通用方法
    public void upDate(String sql, Object... args) {
        Connection conn = null;
        PreparedStatement ps = null;
        try {
            conn = getConnection();
            ps = conn.prepareStatement(sql);

            int len = args.length;
            for (int i = 0; i < len; i++) {
                ps.setObject(i + 1, args[i]);
            }

            ps.execute();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (SQLException e) {
            e.printStackTrace();
            closeResource(conn, ps);
        } finally {
            closeResource(conn,ps);
        }

    }

    // 修改表中的记录
    @Test
    public void testUpdate() {
        Connection conn = null;
        PreparedStatement ps = null;
        try {
            // 1、获取连接
            conn = getConnection();

            // 2、预编译sql语句，返回PrepareStatement的实例
            String sql = "update employee set birth = ? where name = ?";
            ps = conn.prepareStatement(sql);

            // 3、填充占位符
//            SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-mm-dd");
            ps.setDate(1, new Date(new java.util.Date().getTime()));
            ps.setString(2, "哪吒");

            // 4、执行
            ps.execute();
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            // 5、资源关闭
            closeResource(conn, ps);
        }

    }


    // 向表中添加一条记录
    @Test
    public void testInsert() {
        Connection conn = null;
        PreparedStatement ps = null;
        try {
            // 1.读取配置文件中的4个基本信息
            InputStream is = ClassLoader.getSystemClassLoader().getResourceAsStream("jdbc.properties");

            Properties pros = new Properties();
            pros.load(is);

            String user = pros.getProperty("user");
            String password = pros.getProperty("password");
            String url = pros.getProperty("url");
            String driverClass = pros.getProperty("driverClass");

            // 2.加载驱动
            Class.forName(driverClass);

            // 3.获取连接
            conn = DriverManager.getConnection(url, user, password);

//		System.out.println(conn);

            //4.预编译sql语句，返回PreparedStatement的实例
            String sql = "insert into employee(name,email,birth)values(?,?,?)";//?:占位符
            ps = conn.prepareStatement(sql);
            //5.填充占位符
            ps.setString(1, "哪吒");
            ps.setString(2, "nezha@gmail.com");
            SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
            java.util.Date date = sdf.parse("1000-01-01");
            ps.setDate(3, new Date(date.getTime()));

            //6.执行操作
            ps.execute();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            //7.资源的关闭
            try {
                if (ps != null)
                    ps.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
            try {
                if (conn != null)
                    conn.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }

        }

    }

}
