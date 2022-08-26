package QueryRunner;

import dao1.bean.Customer;
import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.ResultSetHandler;
import org.apache.commons.dbutils.handlers.*;
import org.junit.Test;

import java.sql.Connection;
import java.sql.Date;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.List;
import java.util.Map;

import static connection.util.JDBCUtils.closeResource;
import static connection.util.JDBCUtils.getConnection3;


public class QueryRunnerTest {
    /**
     * 插入一条数据
     */
    @Test
    public void testInsert() {
        Connection conn = null;
        try {
            QueryRunner runner = new QueryRunner();
            conn = getConnection3();
            String sql = "insert into employee(name,email,birth) values(?,?,?)";
            int insertCount = runner.update(conn, sql, "小张", "xiaozhang@qq.com", "2099-11-12");
            System.out.println("添加了" + insertCount + "条数据");
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeResource(conn, null);
        }
    }

    /**
     * BeanHandler 查询一条数据
     */
    @Test
    public void testQuery1() {
        QueryRunner runner = new QueryRunner();
        Connection conn = null;
        Customer customer = null;
        try {
            conn = getConnection3();

            String sql = "select * from employee where name = ?";
            BeanHandler<Customer> handler = new BeanHandler<>(Customer.class);
            customer = runner.query(conn, sql, handler, "小明");
            System.out.println(customer);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeResource(conn, null);
        }
    }


    /**
     * BeanListHandler 查询多条数据
     */
    @Test
    public void testQuery2() {
        QueryRunner runner = new QueryRunner();
        Connection conn = null;
        try {
            conn = getConnection3();

            String sql = "select * from employee where id < ?";
            BeanListHandler<Customer> listHandler = new BeanListHandler<>(Customer.class);
            List<Customer> customerList = runner.query(conn, sql, listHandler, 14);
            customerList.forEach(System.out::println);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeResource(conn, null);
        }
    }

    /**
     * MapHandler 查询一条数据
     * 将字段及相应字段的值作为map中的ley和value
     */
    @Test
    public void testQuery3() {
        QueryRunner runner = new QueryRunner();
        Connection conn = null;
        try {
            conn = getConnection3();

            String sql = "select * from employee where name = ?";
            MapHandler handler = new MapHandler();
            Map<String, Object> customerMap = runner.query(conn, sql, handler, "小明");
            System.out.println(customerMap);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeResource(conn, null);
        }
    }

    /**
     * MapListHandler 查询多条数据
     * 将字段及相应字段的值作为map中的ley和value
     */
    @Test
    public void testQuery4() {
        QueryRunner runner = new QueryRunner();
        Connection conn = null;
        try {
            conn = getConnection3();

            String sql = "select * from employee where id < ?";
            MapListHandler mapListHandler = new MapListHandler();
            List<Map<String, Object>> customerListMap = runner.query(conn, sql, mapListHandler, 13);
            customerListMap.forEach(System.out::println);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeResource(conn, null);
        }
    }

    /**
     * ScalarHandler 查询特殊值
     */
    @Test
    public void testQuery5() {
        QueryRunner runner = new QueryRunner();
        Connection conn = null;
        try {
            conn = getConnection3();

            String sql = "select count(*) from employee ";

            ScalarHandler scalarHandler = new ScalarHandler();

            long count = (long) runner.query(conn, sql, scalarHandler);

            System.out.println(count);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeResource(conn, null);
        }
    }

    @Test
    public void testQuery6() {
        QueryRunner runner = new QueryRunner();
        Connection conn = null;
        try {
            conn = getConnection3();

            String sql = "select max(birth) from employee ";

            ScalarHandler scalarHandler = new ScalarHandler();

            Date maxBirth = (Date) runner.query(conn, sql, scalarHandler);

            System.out.println(maxBirth);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeResource(conn, null);
        }
    }


    /**
     * 自定义ResultSetHandler的实现类
     */
    @Test
    public void testQuery7() {
        QueryRunner runner = new QueryRunner();
        Connection conn = null;
        try {
            conn = getConnection3();

            String sql = "select max(birth) from employee ";

            /*
            自定义实现类
             */
            ResultSetHandler<Customer> resultSet = new ResultSetHandler(){

                @Override
                public Customer handle(ResultSet resultSet) throws SQLException {
                    System.out.println("自定义ResultSet'Handler实现类");
                    return null;
                }
            };



            runner.query(conn, sql, resultSet);

        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            closeResource(conn, null);
        }
    }
}
