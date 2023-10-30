package Widgets;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import JDBC.ConnectionProvider;
import Models.PlayListWidget;
import javafx.scene.control.Label;
import javafx.scene.image.Image;

public class SearchSong {

    private static void searchSongInfo(String name, String usr) {

        String query = "SELECT * FROM playlist WHERE sName = ?";
        try {
            Connection con = ConnectionProvider.gConnection();
            PreparedStatement pstmt = con.prepareStatement(query);

            pstmt.setString(1, name);

            ResultSet set = pstmt.executeQuery();
            if (set.next()) {

                System.out.println(set.getString(4));
                PlayListWidget playListWidget = new PlayListWidget(new Image(set.getString(4)),
                        new Label(set.getString(2)), set.getString(3));
                MusicPlayerWidget.display(name, playListWidget, false);
            } else {

                AlertWindow.display();
            }

        } catch (SQLException e) {

            e.printStackTrace();
        }
    }

    public static void search(String Name, String usr) {

        searchSongInfo(Name, usr);
    }
}
