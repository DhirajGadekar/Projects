package JDBC;

import java.sql.Connection;
import java.sql.PreparedStatement;

public class LikeSongAdd {

    public static void likeSongAdd(String name, String url, String usr) {

        String query = "Insert into " + usr + " (sName, link) value (?, ?)";

        try {

            Connection con = ConnectionProvider.gConnection();
            PreparedStatement ps = con.prepareStatement(query);

            ps.setString(1, name);
            ps.setString(2, url);

            int row = ps.executeUpdate();
            System.out.println(row);

        } catch (Exception e) {

            e.printStackTrace();
        }
    }
}
