package JDBC;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class Login {
    String usr = null;
    String pwd = null;

    public Login(String usr, String pwd) {

        this.usr = usr;
        this.pwd = pwd;
    }

    public boolean checkLoginCredentials() {

        String query = "SELECT * FROM spotify.user where usr = ? AND pwd = ?";
        try {
            Connection con = ConnectionProvider.gConnection();
            PreparedStatement pstmt = con.prepareStatement(query);

            pstmt.setString(1, this.usr);
            pstmt.setString(2, this.pwd);

            ResultSet set = pstmt.executeQuery();
            if (set.next()) {

                if ((set.getString(2)).equals(usr) && ((set.getString(3)).equals(pwd))) {

                    return true;
                }

            } else {

                return false;
            }

        } catch (SQLException e) {

            e.printStackTrace();
        }
        return false;
    }
}
