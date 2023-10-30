package Screens;

import HorizontallyScrollView.HorizontalScrollRecentlyPlayList;
import Models.PlayListWidget;
import VScrollSongList.MixGymSongList;
import Widgets.MusicPlayerWidget;
import javafx.geometry.Insets;
import javafx.scene.Node;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;

public class FavoriteListWidget {

    static HBox container = new HBox();
    static PlayListWidget selectedItem;

	static PlayListWidget oldSelectedPlayListWidget = new PlayListWidget();
	static Stage musicWindow;
    static Button btn = new Button();
    static HorizontalScrollRecentlyPlayList horizontalPlayList;

    static ScrollPane[] arr = new ScrollPane[8];

    static ScrollPane scrollPane;
    static Node listNode;

    public static StackPane createCircle(String imageUrl){

            Image profileImage = new Image(imageUrl);
            Circle circle = new Circle(80);
            circle.setFill(Color.web("#9f56e9"));
            ImageView imageView = new ImageView(profileImage);
            imageView.setFitWidth(140);
            imageView.setFitHeight(140);
            Rectangle clip = new Rectangle(imageView.getFitWidth(), imageView.getFitHeight());
            clip.setArcWidth(140); 
            clip.setArcHeight(140); 
            imageView.setClip(clip);

            StackPane stackPane = new StackPane();
            stackPane.getChildren().addAll(circle,imageView);
            return stackPane;
    }

    public static HBox display(){

        arr[0] = new ScrollPane();
        arr[1] = new ScrollPane();
        arr[2] = new ScrollPane();
        arr[3] = new ScrollPane();
        arr[4] = new ScrollPane();
        arr[5] = new ScrollPane();

        arr[0] = MixGymSongList.getLofiList();
        arr[1] = MixGymSongList.getChillOutList();
        arr[2] = MixGymSongList.getGymList();
        arr[3] = MixGymSongList.getDevotionalList();
        arr[4] = MixGymSongList.getSadSongList();
        arr[5] = MixGymSongList.getOldList();
        arr[6] = MixGymSongList.getMashUpList();
        arr[7] = MixGymSongList.getLoveList();
        
        Label textLabel = new Label("Your Top Mixes");
        textLabel.setStyle("-fx-font-size: 30px;-fx-font-weight: bold;");
        textLabel.setPadding(new Insets(0, 0, 0, 10));

        StackPane circularStackPane1 = createCircle("https://yt3.googleusercontent.com/tvIttIILcvquBf3613f-hDM232RL0HM_xzNedQgoWT_6a5CyvljoMq0NKTFcJAPj4CNCd_eg5po=s900-c-k-c0x00ffffff-no-rj");
       
        StackPane circularStackPane2 = createCircle("https://play-lh.googleusercontent.com/W6xVPzhKKTyzvkxdN620TTjtL_q1B2Zf7vHeqzEFH9MUH80G0ewouWaLZsNKjkqyHSo");
        StackPane circularStackPane3 = createCircle("https://img.freepik.com/premium-vector/music-fitness-logo-unique-exclusive-elegant-professional-clean-simple-modern-logo_418019-175.jpg");
        StackPane circularStackPane4 = createCircle("https://c.saavncdn.com/editorial/logo/TopJioTunesDevotionalHindi_20190423062231.jpg");
        StackPane circularStackPane5 = createCircle("https://i1.sndcdn.com/artworks-000092443740-u605su-t500x500.jpg");
        StackPane circularStackPane6 = createCircle("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTafrjOpXYHOxjDlqJLsOYkH3cxX72Ijti6Qw&usqp=CAU");
        StackPane circularStackPane7 = createCircle("https://yt3.googleusercontent.com/ytc/APkrFKbcvwSuu6gBJtMXmz_XtFJw67PHOfoKfUp3dMGkLA=s900-c-k-c0x00ffffff-no-rj");
        StackPane circularStackPane8 = createCircle("https://images.saymedia-content.com/.image/t_share/MTg0NzU1NDUwNDA5OTg1MTQ0/100-thoughtful-love-songs-to-dedicate-to-your-boyfriend.png");

        HBox contentContainer = new HBox(10);
        contentContainer.getChildren().addAll(circularStackPane1,circularStackPane2,circularStackPane3,circularStackPane4,circularStackPane5,circularStackPane6,circularStackPane7,circularStackPane8);
        contentContainer.setPadding(new Insets(0, 10, 0, 10));

        VBox vcontainer = new VBox(10);
        scrollPane = MixGymSongList.getLofiList();   
        vcontainer.getChildren().addAll(textLabel,contentContainer,scrollPane); 

        listNode = scrollPane.getContent();
        openMusicPlayer(listNode);

        circularStackPane1.setOnMouseClicked(e->{
        vcontainer.getChildren().clear();
        vcontainer.getChildren().addAll(textLabel,contentContainer,arr[0]);
        listNode = arr[0].getContent(); 
        openMusicPlayer(listNode); 
        scrollPane = arr[0];   
        });

        circularStackPane2.setOnMouseClicked(e->{
            vcontainer.getChildren().clear();
            vcontainer.getChildren().addAll(textLabel,contentContainer,arr[1]); 
            listNode = arr[1].getContent();
            openMusicPlayer(listNode);  
            scrollPane = arr[1]; 
        });

        circularStackPane3.setOnMouseClicked(e->{
            vcontainer.getChildren().clear();
            vcontainer.getChildren().addAll(textLabel,contentContainer,arr[2]);
            listNode = arr[2].getContent();  
            openMusicPlayer(listNode);
            scrollPane = arr[2];    
        });

        circularStackPane4.setOnMouseClicked(e->{
            vcontainer.getChildren().clear();
            vcontainer.getChildren().addAll(textLabel,contentContainer,arr[3]);  
            listNode = arr[3].getContent(); 
            openMusicPlayer(listNode); 
            scrollPane = arr[3];  
        });

        circularStackPane5.setOnMouseClicked(e->{
            vcontainer.getChildren().clear();
            vcontainer.getChildren().addAll(textLabel,contentContainer,arr[4]); 
            listNode = arr[4].getContent(); 
            openMusicPlayer(listNode); 
            scrollPane = arr[4];   
        });

        circularStackPane6.setOnMouseClicked(e->{
            vcontainer.getChildren().clear();
            vcontainer.getChildren().addAll(textLabel,contentContainer,arr[5]);
            listNode = arr[5].getContent();
            openMusicPlayer(listNode);  
            scrollPane = arr[5];    
        });

        circularStackPane7.setOnMouseClicked(e->{
            vcontainer.getChildren().clear();
            vcontainer.getChildren().addAll(textLabel,contentContainer,arr[6]);
            listNode = arr[6].getContent();
            openMusicPlayer(listNode);  
            scrollPane = arr[6];    
        });

        circularStackPane8.setOnMouseClicked(e->{
            vcontainer.getChildren().clear();
            vcontainer.getChildren().addAll(textLabel,contentContainer,arr[7]);
            listNode = arr[7].getContent();
            openMusicPlayer(listNode);  
            scrollPane = arr[7];    
        });

        container.getChildren().add(vcontainer);
        return container;
    }

    private static void openMusicPlayer(Node listNode){
        if(listNode instanceof ListView){
			
			ListView<?> listView = (ListView<?>) listNode;
			listView.getSelectionModel().selectedItemProperty().addListener((observable, oldValue, newValue) -> {
				if (newValue != null) {

					selectedItem = (PlayListWidget) newValue;

					System.out.println("Selected Song Name: " + selectedItem.getSongName());

					if(oldValue != null){
						System.out.println("Old Selected Song:"+oldSelectedPlayListWidget);
						oldSelectedPlayListWidget.changeButtonIcon();
						oldSelectedPlayListWidget.stopMp3();
					}

					if(musicWindow != null ){
						musicWindow.close();
						oldSelectedPlayListWidget.changeButtonIcon();
					}

					forwordRecentlyPlayed();
					musicWindow = MusicPlayerWidget.display(null,selectedItem,true);
					
					selectedItem.changeButtonIcon();

					oldSelectedPlayListWidget = selectedItem;
			    	System.out.println("Clicked item: " + selectedItem.toString());
				}
			});
		}

				if(oldSelectedPlayListWidget != null){

					btn = oldSelectedPlayListWidget.getIconButton();
					btn.setOnAction(e->{
						oldSelectedPlayListWidget.pauseMp3();
					});  
	}	

    }

    private static void forwordRecentlyPlayed() {

		horizontalPlayList = new HorizontalScrollRecentlyPlayList();
		if(selectedItem != null){
			horizontalPlayList.addRecentlyPlayedSong(selectedItem);
		}
	}
}