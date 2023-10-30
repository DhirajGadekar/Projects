package HoriScrollView2;

import Models.PlayListWidget;
import javafx.application.Platform;
import javafx.collections.FXCollections;
import javafx.collections.ListChangeListener;
import javafx.collections.ObservableList;
import javafx.geometry.Insets;
import javafx.scene.control.Label;
import javafx.scene.control.ListCell;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.image.Image;
import javafx.scene.layout.VBox;

public class HoriScrollFavList {
   static ScrollPane scrollPane;
   static ListView<PlayListWidget> listView;
    
    private static ObservableList<PlayListWidget> favList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://i.ytimg.com/vi/OhVtC41n7X0/maxresdefault.jpg"), new Label("Hanuman Chalisa"),"https://pagalfree.com/musics/128-Jai%20Hanuman%20Gyan%20Gun%20Sagar%20-%20Maruti%20Mera%20Dosst%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://a10.gaanacdn.com/images/albums/57/64957/crop_480x480_64957.jpg"), new Label("Deva Shree Ganesha"),"https://pagalfree.com/musics/128-Deva%20Shree%20Ganesha%20-%20Agneepath%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://i.pinimg.com/originals/89/54/ed/8954ed041ecc96b0a388d1fd1e716050.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://daily.jstor.org/wp-content/uploads/2023/01/good_times_with_bad_music_1050x700.jpg"), new Label("Mann Le"),"https://pagalfree.com/musics/128-Maan%20Le%20-%20Chitrakut%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Ye tune kya kiya"),"https://pagalfree.com/musics/128-Ye%20Tune%20Kya%20Kiya%20-%20Once%20Upon%20A%20Time%20In%20Mumbaai%20Dobara%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://i.ytimg.com/vi/YIBo4yvLkfU/maxresdefault.jpg"), new Label("Hau me"),"https://pagalfree.com/musics/128-Hua%20Main%20-%20Animal%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQLve2HFuzK_GfPu0OesOKvO2546vvfSIHoopv-rUMRcrWSH00oVXWYdf0jPTEdlUnFwRU&usqp=CAU"), new Label("Teri Mitti"),"https://pagalfree.com/musics/128-Teri%20Mitti%20-%20Female%20Version%20-%20Kesari%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://i1.sndcdn.com/artworks-000007062388-xiwflc-t500x500.jpg"), new Label("Aasman Ko Chhukar"),"https://pagalfree.com/musics/128-Aasman%20Ko%20Chukar%20-%20Hanuman%20Returns%20128%20Kbps.mp3")
    );

    public  void addRecentlyPlayedSong(PlayListWidget recentlyPlayedSong) {
    
        favList.addListener(new ListChangeListener<PlayListWidget>() {
            @Override
            public void onChanged(Change<? extends PlayListWidget> change) {
                while (change.next()) {
                    if (change.wasAdded()) {
                    
                        for (PlayListWidget addedSong : change.getAddedSubList()) {
                   
                            System.out.println("New song added: " + addedSong);
                        }
                    }
                }
            }
        });
        Platform.runLater(()->{
           favList.add(0, recentlyPlayedSong); 
        });   
    }

    public static ScrollPane getRecentlyPlayedList(){
        
        listView = new ListView<>(favList);
        listView.setCellFactory(param -> new CardCell());
        listView.setOrientation(javafx.geometry.Orientation.HORIZONTAL);

        scrollPane = new ScrollPane(listView);
        scrollPane.setMinWidth(1400);
        scrollPane.setMaxHeight(230);
        scrollPane.setFitToWidth(true);
        scrollPane.setFitToHeight(true);
        scrollPane.setHbarPolicy(ScrollPane.ScrollBarPolicy.NEVER);
        scrollPane.setVbarPolicy(ScrollPane.ScrollBarPolicy.NEVER);

        return scrollPane;
    }
}
class CardCell extends ListCell<PlayListWidget> {

    @Override
    protected void updateItem(PlayListWidget data,boolean empty){

        super.updateItem(data,empty);
        if(data != null && !empty){
            VBox cardLayout =  new VBox(10);
            cardLayout.getChildren().add(data.getMusicImageView());
            cardLayout.getChildren().add(data.getSongNameBox());
            setGraphic(cardLayout);
            cardLayout.setPadding(new Insets(10,0,10,0));
        }else{
            setGraphic(null);
        }
    } 
}
