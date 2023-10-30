package HoriScrollView;
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

public class HoriScrollMyPlayList {

   static ScrollPane scrollPane;
   static ListView<PlayListWidget> listView;
    
   static ObservableList<PlayListWidget> myPlayList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://pagalfree.com/images/128Jehda%20Nasha%20-%20An%20Action%20Hero%20128%20Kbps.jpg"), new Label("Jedha Nasha"),"https://pagalfree.com/musics/128-Jehda%20Nasha%20-%20An%20Action%20Hero%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/12812%20Ladke%20-%20Tony%20Kakkar%20128%20Kbps.jpg"), new Label("12 ladke"),"https://pagalfree.com/musics/128-Jehda%20Nasha%20-%20An%20Action%20Hero%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://pagalfree.com/images/192Get%20Ready%20To%20Fight%20Reloaded%20(feat.%20Siddharth%20Basrur)%20-%20Baaghi%203%20192%20Kbps.jpg"), new Label("Gets Ready To Fight"),"https://pagalfree.com/musics/192-Get%20Ready%20To%20Fight%20Reloaded%20(feat.%20Siddharth%20Basrur)%20-%20Baaghi%203%20192%20Kbps.mp"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Rise%20Of%20Sultan%20-%20Sultan%20128%20Kbps.jpg"), new Label("Rise Of Sultan"),"https://pagalfree.com/musics/128-Rise%20Of%20Sultan%20-%20Sultan%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Chak%20De%20India%20-%20Chak%20De!%20India%20128%20Kbps.jpg"), new Label("Chak de India"),"https://pagalfree.com/musics/128-Chak%20De%20India%20-%20Chak%20De!%20India%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Nashe%20Si%20Chadh%20Gayi%20-%20Befikre%20128%20Kbps.jpg"), new Label("Nashe Si Chadh Gayi"),"https://pagalfree.com/musics/128-Nashe%20Si%20Chadh%20Gayi%20-%20Befikre%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Nashe%20Si%20Chadh%20Gayi%20-%20Befikre%20128%20Kbps.jpg"), new Label("Ude Dil Befikare"),"https://pagalfree.com/musics/128-Ude%20Dil%20Befikre%20-%20Befikre%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Chaleya%20-%20Jawan%20128%20Kbps.jpg"), new Label("Chaleya"),"https://pagalfree.com/musics/128-Chaleya%20-%20Jawan%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://pagalfree.com/images/1288%20Saal%20-%208%20Saal%20128%20Kbps.jpg"), new Label("8 Saal"),"https://pagalfree.com/musics/128-8%20Saal%20-%208%20Saal%20128%20Kbps.mp3")
    );

    public void addMyPlayListSong(PlayListWidget myPlayedSong) {
    
        myPlayList.addListener(new ListChangeListener<PlayListWidget>() {
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
           myPlayList.add(0, myPlayedSong); 
        });   
    }

    public static void removeSongFromMyPlayList(PlayListWidget songToRemove) {
        java.util.Iterator<PlayListWidget> iterator = myPlayList.iterator();
        while (iterator.hasNext()) {
            PlayListWidget song = iterator.next();
            if (song.equals(songToRemove)) {
                Platform.runLater(() -> {
                    iterator.remove();
                });
                break;
            }
        }
    }

    public static ScrollPane getRecentlyPlayedList(){
        
        listView = new ListView<>(myPlayList);
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

    public static ScrollPane getMyPlayList(){
        
        listView = new ListView<>(myPlayList);
        listView.setCellFactory(param -> new CardCell1());
        listView.setOrientation(javafx.geometry.Orientation.HORIZONTAL);

        scrollPane = new ScrollPane(listView);
        scrollPane.setMinWidth(800);
        scrollPane.setMaxHeight(300);
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

//for circular View
class CardCell1 extends ListCell<PlayListWidget> {

    @Override
    protected void updateItem(PlayListWidget data,boolean empty){

        super.updateItem(data,empty);
        if(data != null && !empty){
            VBox cardLayout =  new VBox(10);
            cardLayout.getChildren().add(data.getMusicImageCircularView());
            cardLayout.getChildren().add(data.getSongNameBox());
            setGraphic(cardLayout);
            cardLayout.setPadding(new Insets(10,0,10,0));
        }else{
            setGraphic(null);
        }
    }
}