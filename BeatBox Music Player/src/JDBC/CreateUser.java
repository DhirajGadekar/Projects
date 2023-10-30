package JDBC;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.Statement;

public class CreateUser {

    String usr = null;
    String pwd = null;
    String phone = null;
    String email = null;
    String name = null;
    String dob = null;
    String gender = null;
    public static String usrname = null;

    public CreateUser(String usr, String pwd, String phone) {
        this.usr = usr;
        this.pwd = pwd;
        this.phone = phone;
        usrname = usr;
    }

    public CreateUser() {

    }
    public String getUsername() {
        
        return this.usr;
    }
    public static void createFavTable(String usr) {

        String query = "Create table IF NOT EXISTS " + usr + " ( id int, sName varchar(100), link varchar(200))";
        try {
            Connection con = ConnectionProvider.gConnection();
            Statement stmt = con.createStatement();
            stmt.execute(query);

        } catch (Exception e) {

        }
    }

    public boolean createUser() {

        String query = "Insert into user (usr, pwd, phone) value (?, ?, ?)";
        int row = 0;
        try {

            Connection conn = ConnectionProvider.gConnection();
            PreparedStatement ps = conn.prepareStatement(query);

            ps.setString(1, usr);
            ps.setString(2, pwd);
            ps.setString(3, phone);

            row = ps.executeUpdate();

        } catch (Exception e) {

            e.printStackTrace();
        }
        if (row != 0) {
            createFavTable(usr);
            return true;
        } else {

            return false;
        }
    }
}
