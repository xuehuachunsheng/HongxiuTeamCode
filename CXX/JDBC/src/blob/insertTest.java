package blob;

import org.junit.Test;

import java.io.IOException;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import static PreparedStatement.JDBCUtils.utils.closeResource;
import static PreparedStatement.JDBCUtils.utils.getConnection;

public class insertTest {
    @Test
    public void test() throws SQLException, IOException, ClassNotFoundException {
        Connection conn = null;
        PreparedStatement ps = null;
        long startDate = System.currentTimeMillis();
        try {
            conn = getConnection();
            String sql = "insert into goods (name) value (?)";
            ps = conn.prepareStatement(sql);

            // 禁止自动提交
            conn.setAutoCommit(false);

            int count = 2000000;
            for (int i = 0; i < count; i++) {
                ps.setObject(1,"name_" + i); //259133------7668-------6713

                //存入，但不执行添加数据库
                ps.addBatch();

                if(i % 500 == 0 || i == count - 1){

                    //一起执行
                    ps.executeBatch();

                    //清空
                    ps.clearBatch();
                }
            }

            //执行提交
            conn.commit();
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            closeResource(conn,ps);

            long endDate = System.currentTimeMillis();

            long time = endDate - startDate;
            System.out.println("耗时：" + time);
        }

    }
}
