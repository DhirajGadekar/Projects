package JDBC;

import java.sql.Connection;
import java.sql.DriverManager;

public class ConnectionProvider {

    private static Connection con;

    public static Connection gConnection() {

        String url = "jdbc:mysql://localhost:3306/spotify";
        String usr = "root";
        String pwd = "MySQL@123";

        try {

            Class.forName("com.mysql.cj.jdbc.Driver");
            if (con == null) {

                con = DriverManager.getConnection(url, usr, pwd);
                return con;
            }
        } catch (Exception e) {

            e.printStackTrace();
        }
        return con;
    }
}
