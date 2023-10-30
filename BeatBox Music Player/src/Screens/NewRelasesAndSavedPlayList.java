package Screens;

import HoriScrollView.HoriScrollMyPlayList;
import HoriScrollView2.HoriScrollFavList;
import HorizontalScroll.HorizontalScrollablePlayList;
import HorizontallyScrollView.HorizontalScrollRecentlyPlayList;
import Models.PlayListWidget;
import Widgets.MusicPlayerWidget;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Node;
import javafx.scene.control.Label;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class NewRelasesAndSavedPlayList {

    static VBox container;
    static ScrollPane scrollpane1;
    static ScrollPane scrollpane2;
	static ScrollPane scrollpane3;
	static ScrollPane scrollpane4;

    static PlayListWidget selectedItem;
    static PlayListWidget selectedItem2;
	static PlayListWidget selectedItem3;
	static PlayListWidget selectedItem4;

	static PlayListWidget oldSelectedPlayListWidget = new PlayListWidget();
    static PlayListWidget oldSelectedPlayListWidget2 = new PlayListWidget();
	static PlayListWidget oldSelectedPlayListWidget3 = new PlayListWidget();
	static PlayListWidget oldSelectedPlayListWidget4 = new PlayListWidget();
	static Stage musicWindow;

    public static Label createLable(String text){
        Label textLabel = new Label(text);
        textLabel.setStyle("-fx-font-size: 30px;-fx-font-weight: bold;");
        textLabel.setPadding(new Insets(0, 0, 0, 10));
        return textLabel;
    }

    public static VBox display(){

    //New Release   
        scrollpane1 = HorizontalScrollablePlayList.getNewRelaseList();

        Node listNode = scrollpane1.getContent();

        if(listNode instanceof ListView){
			
			ListView<?> listView = (ListView<?>) listNode;
			listView.getSelectionModel().selectedItemProperty().addListener((observable, oldValue, newValue) -> {
				if (newValue != null) {

					selectedItem = (PlayListWidget) newValue;

					System.out.println("Selected new releases Song Name: " + selectedItem.getSongName());

					if(oldValue != null){
						System.out.println("Old Selected new releases song playlist:"+oldSelectedPlayListWidget);
						oldSelectedPlayListWidget.stopMp3();
					}

					if(musicWindow != null ){
						musicWindow.close();
					}

					//forwordRecentlyPlayed();
					musicWindow = MusicPlayerWidget.display(null,selectedItem,false);

					oldSelectedPlayListWidget = selectedItem;
			    	System.out.println("Clicked item in new releases playList: " + selectedItem.toString());
				}
			});
		}

        VBox vBox1 = new VBox(5);
        vBox1.getChildren().addAll(createLable("New Relases ▶"),scrollpane1);

    //recentlyPlayed

       scrollpane2 = HorizontalScrollRecentlyPlayList.getRecentlyPlayedList();
       Node listNode2 = scrollpane2.getContent();

        if(listNode2 instanceof ListView){
			
			ListView<?> listView1 = (ListView<?>) listNode2;
			listView1.getSelectionModel().selectedItemProperty().addListener((observable, oldValue, newValue) -> {
				if (newValue != null) {

					selectedItem2 = (PlayListWidget) newValue;

					System.out.println("Selected recently playlist Song Name: " + selectedItem2.getSongName());

					if(oldValue != null){
						System.out.println("Old Selected Song recently playlist:" + oldSelectedPlayListWidget2);
						oldSelectedPlayListWidget2.stopMp3();
					}

					if(musicWindow != null ){
						musicWindow.close();
					}

					musicWindow = MusicPlayerWidget.display(null, selectedItem2,false);

					oldSelectedPlayListWidget2 = selectedItem2;
			    	System.out.println("Clicked item in recently playList: " + selectedItem2.toString());
				}
			});
		}

        VBox vBox2 = new VBox(5);
        vBox2.getChildren().addAll(createLable("Recently Played ▶"),scrollpane2);

	//MyPlayList

		scrollpane3 = HoriScrollMyPlayList.getRecentlyPlayedList();
		Node listNode3 = scrollpane3.getContent();

        if(listNode3 instanceof ListView){
			
			ListView<?> listView1 = (ListView<?>) listNode3;
			listView1.getSelectionModel().selectedItemProperty().addListener((observable, oldValue, newValue) -> {
				if (newValue != null) {

					selectedItem3 = (PlayListWidget) newValue;

					System.out.println("Selected recently playlist Song Name: " + selectedItem3.getSongName());

					if(oldValue != null){
						System.out.println("Old Selected Song recently playlist:" + oldSelectedPlayListWidget3);
						oldSelectedPlayListWidget3.stopMp3();
					}

					if(musicWindow != null ){
						musicWindow.close();
					}

					musicWindow = MusicPlayerWidget.display(null, selectedItem3,false);

					oldSelectedPlayListWidget3 = selectedItem3;
			    	System.out.println("Clicked item in recently playList: " + selectedItem3.toString());
				}
			});
		}
		VBox vBox3 = new VBox(5);
        vBox3.getChildren().addAll(createLable("My PlayList ▶"),scrollpane3);

	//FavList

		scrollpane4 = HoriScrollFavList.getRecentlyPlayedList();
		Node listNode4 = scrollpane4.getContent();

        if(listNode4 instanceof ListView){
			
			ListView<?> listView4 = (ListView<?>) listNode4;
			listView4.getSelectionModel().selectedItemProperty().addListener((observable, oldValue, newValue) -> {
				if (newValue != null) {

					selectedItem4 = (PlayListWidget) newValue;

					System.out.println("Selected recently playlist Song Name: " + selectedItem4.getSongName());

					if(oldValue != null){
						System.out.println("Old Selected Song recently playlist:" + oldSelectedPlayListWidget4);
						oldSelectedPlayListWidget4.stopMp3();
					}

					if(musicWindow != null ){
						musicWindow.close();
					}

					musicWindow = MusicPlayerWidget.display(null, selectedItem4,false);

					oldSelectedPlayListWidget4 = selectedItem4;
			    	System.out.println("Clicked item in recently playList: " + selectedItem4.toString());
				}
			});
		}
		VBox vBox4 = new VBox(5);
        vBox4.getChildren().addAll(createLable("Favorite List ▶"),scrollpane4);

        container = new VBox(); 
        container.getChildren().addAll(vBox1,vBox2,vBox3,vBox4);
        container.setPadding(new Insets(0, 0, 0, 0));
        container.setAlignment(Pos.CENTER);

        return container;
    }
}