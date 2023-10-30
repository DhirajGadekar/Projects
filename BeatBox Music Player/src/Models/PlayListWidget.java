package Models;

import javafx.beans.property.ObjectProperty;
import javafx.beans.property.SimpleObjectProperty;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.shape.Rectangle;
import javazoom.jl.player.advanced.AdvancedPlayer;

public class PlayListWidget {
    private Image title;
    private Label songName;
    private Button iconButton;
    String musicUrl;
    HBox containerForContent;
    Rectangle clip;
    String iconForButton = "||";
    AdvancedPlayer player;
    int countForPause;
    StackPane stackPane1 = new StackPane();
    private final ObjectProperty<PlayListWidget> selectedPlayedSongProperty = new SimpleObjectProperty<>(this);

    public PlayListWidget() {

    }

    public PlayListWidget(Image title, Label songName, String musicUrl) {
        this.title = title;
        this.songName = songName;
        this.musicUrl = musicUrl;
        songName.setStyle("-fx-font-size: 20px; -fx-font-weight: bold; -fx-text-fill: #131345;");
    }

    // Getter and Setter for selectedPlayedSong
    public final ObjectProperty<PlayListWidget> selectedPlayedSongProperty() {
        return selectedPlayedSongProperty;
    }

    public final PlayListWidget getSelectedPlayedSong() {
        return selectedPlayedSongProperty.get();
    }

    public String getSongName() {

        return songName.getText();
    }

    public Label getSongLabel() {

        return songName;
    }

    public final void setSelectedPlayedSong(PlayListWidget value) {
        selectedPlayedSongProperty.set(value);
    }

    public Image getImageUrl() {

        return title;
    }

    public ImageView getTitle() {
        ImageView imageView = new ImageView(title);
        imageView.setFitWidth(60);
        imageView.setFitHeight(60);
        clip = new Rectangle(imageView.getFitWidth(), imageView.getFitHeight());
        clip.setArcWidth(30);
        clip.setArcHeight(30);
        imageView.setClip(clip);
        return imageView;
    }

    public ImageView getMusicImageView() {
        ImageView imageView = new ImageView(title);
        imageView.setFitWidth(150);
        imageView.setFitHeight(150);
        clip = new Rectangle(imageView.getFitWidth(), imageView.getFitHeight());
        clip.setArcWidth(30);
        clip.setArcHeight(30);
        imageView.setClip(clip);
        return imageView;
    }

    public ImageView getMusicImageCircularView() {
        ImageView imageView = new ImageView(title);
        imageView.setFitWidth(200);
        imageView.setFitHeight(200);
        clip = new Rectangle(imageView.getFitWidth(), imageView.getFitHeight());
        clip.setArcWidth(180);
        clip.setArcHeight(180);
        imageView.setClip(clip);
        return imageView;
    }

    public HBox getContent() {
        containerForContent = new HBox();
        containerForContent.getChildren().add(songName);
        containerForContent.setPrefWidth(170);
        containerForContent.setMaxHeight(60);
        return containerForContent;
    }

    public HBox getFullContent() {
        containerForContent = new HBox();
        containerForContent.getChildren().add(songName);
        containerForContent.setPrefWidth(310);
        containerForContent.setMaxHeight(60);
        return containerForContent;
    }

    public StackPane getSongNameBox() {

        String str = songName.getText();
        Label label = new Label(str);
        stackPane1 = new StackPane();
        label.setStyle("-fx-font-size: 20px; -fx-font-weight: bold;");
        stackPane1.getChildren().add(songName);
        stackPane1.setMaxSize(150, 20);
        stackPane1.setAlignment(Pos.CENTER);
        return stackPane1;
    }

    public String getMusicUrlString() {

        return musicUrl;
    }

    public Button getIconButton() {

        iconButton = new Button("▶");
        iconButton.setStyle("-fx-background-color: white; -fx-font-size: 35px;");
        iconButton.setMinSize(30, 30);
        return iconButton;
    }

    public void changeButtonIcon() {

        System.out.println("In change Button method");

        String temp = iconButton.getText();
        iconButton.setText(iconForButton);
        iconForButton = temp;

        clip = new Rectangle(30, 30);
        clip.setArcWidth(50);
        clip.setArcHeight(50);

    }

    public void stopMp3() {
        if (player != null) {
            player.close();
        }
    }

    public void pauseMp3() {

        System.out.println("In pause");
        countForPause++;
        if (countForPause == 2) {
            player.close();
            countForPause = 0;
        }
    }

    // public void playMP3() {

    // System.out.println("In Play Music method");
    // try {

    // String mp3URL = musicUrl;
    // URL url = new URL(mp3URL);
    // InputStream in = new BufferedInputStream(url.openStream());
    // Bitstream bitstream = new Bitstream(in);

    // player = new AdvancedPlayer(in);
    // player.setPlayBackListener(new PlaybackListener() {
    // @Override
    // public void playbackFinished(PlaybackEvent evt){
    // changeButtonIcon();
    // player.close();
    // }
    // });

    // new Thread(() -> {
    // try {
    // player.play();
    // } catch (Exception e) {
    // e.printStackTrace();
    // }
    // }).start();
    // } catch (Exception e) {
    // e.printStackTrace();
    // }
    // }
}
