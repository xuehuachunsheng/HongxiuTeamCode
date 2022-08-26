package transaction;

import org.junit.Test;

import java.sql.Connection;

import static transaction.JDBCUtils.utils.getConnection;

public class ConnectionTest {

	@Test
	public void testGetConnection() throws Exception{
		Connection conn = getConnection();
		System.out.println(conn);
	}
}
