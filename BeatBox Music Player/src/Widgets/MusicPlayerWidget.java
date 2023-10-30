package Widgets;

import java.io.File;
import HoriScrollView.HoriScrollMyPlayList;
import HoriScrollView2.HoriScrollFavList;
import Models.PlayListWidget;
import javafx.animation.RotateTransition;
import javafx.beans.InvalidationListener;
import javafx.beans.Observable;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ProgressBar;
import javafx.scene.control.Slider;
import javafx.scene.effect.DropShadow;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.Background;
import javafx.scene.layout.BackgroundFill;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.scene.media.Media;
import javafx.scene.media.MediaPlayer;
import javafx.scene.media.MediaPlayer.Status;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Rectangle;
import javafx.scene.media.MediaView;
import javafx.stage.Stage;
import javafx.util.Duration;

public class MusicPlayerWidget {

    static Stage primaryStage;
    static Scene scene;

    static HBox container;
    static String onlineAudioURL;
    static MediaPlayer mediaPlayer;
    static MediaView mediaView;
    static Button playButton;
    static Button pauseButton;
    static Slider volumeSlider;
    static VBox root;
    static RotateTransition rt;
    static ProgressBar progressBar;
    static Duration durationForSong;
    static Label durationLabel;
    static int count = 0;
    static int count1 = 0;
    static Button saveButton;
    static Button favButton;
    static Media media;
    boolean toggleForVerticalScroollabelPlayList;

    public static Stage display(String name, PlayListWidget selectedItem,
            boolean toggleForVerticalScroollabelPlayList) {

        primaryStage = new Stage();
        primaryStage.getIcons().add(new Image("Images/BeatBox_logo.png"));
        primaryStage.setOnCloseRequest(event -> {
            count = 0;
            count1 = 0;
            saveButton.setText("🔖");
            favButton.setStyle("-fx-font-size: 24px; -fx-font-weight: bold;-fx-text-fill: white;");

            if (mediaPlayer != null && mediaPlayer.getStatus() == Status.PLAYING
                    && toggleForVerticalScroollabelPlayList) {
                selectedItem.changeButtonIcon();
            }
            mediaPlayer.pause();
        });

        primaryStage.setTitle("BeatBox");

        HBox container = new HBox();
        container.getChildren().add(createDetailsView(name, selectedItem, toggleForVerticalScroollabelPlayList));

        BackgroundFill backgroundFill = new BackgroundFill(Color.web("#9f56e9"), null, null);
        Background background = new Background(backgroundFill);
        container.setBackground(background);

        scene = new Scene(container, 450, 600);

        primaryStage.setScene(scene);
        primaryStage.show();

        return primaryStage;
    }

    public static HBox createDetailsView(String name, PlayListWidget selectedProperty,
            boolean toggleForVerticalScroollabelPlayList) {

        onlineAudioURL = selectedProperty.getMusicUrlString();

        if (name != null && name.equalsIgnoreCase("keejo kesari ke lal")) {
            // String filePath = "C:\\Users\\DHIRAJ GADEKAR\\Music\\KeejoKesariKeLaal.mp3";
            media = new Media(new File(onlineAudioURL).toURI().toString());
            mediaPlayer = new MediaPlayer(media);
        } else if (name != null && name.equalsIgnoreCase("tiger ka hukum")) {
            System.out.println(selectedProperty.getImageUrl());
            media = new Media(new File(onlineAudioURL).toURI().toString());
            mediaPlayer = new MediaPlayer(media);
        } else {
            media = new Media(onlineAudioURL);
            mediaPlayer = new MediaPlayer(media);
        }
        mediaView = new MediaView(mediaPlayer);

        mediaPlayer.currentTimeProperty().addListener((observable, oldValue, newValue) -> {
            double totalDuration = mediaPlayer.getTotalDuration().toSeconds();
            double currentDuration = newValue.toSeconds();
            double progress = currentDuration / totalDuration;
            progressBar.setProgress(progress);
        });

        Rectangle cardRectangle = new Rectangle(350, 500);
        cardRectangle.setFill(Color.web("#ccb0e8"));
        cardRectangle.setArcHeight(80);
        cardRectangle.setArcWidth(80);

        DropShadow dropShadow = new DropShadow();
        dropShadow.setColor(Color.GRAY);
        dropShadow.setOffsetX(10);
        dropShadow.setOffsetY(10);
        cardRectangle.setEffect(dropShadow);

        StackPane stackPaneForCard = new StackPane();
        stackPaneForCard.getChildren().add(cardRectangle);
        stackPaneForCard.setAlignment(Pos.CENTER);

        Button nextButton = new Button("▶️");
        nextButton.setStyle("-fx-font-size: 24px; -fx-font-weight: bold;");

        Button previousButton = new Button("◀️");
        previousButton.setStyle("-fx-font-size: 24px; -fx-font-weight: bold;");

        Button playButton = new Button("||");
        playButton.setStyle("-fx-font-size: 24px; -fx-font-weight: bold;");

        saveButton = new Button("🔖");
        saveButton.setStyle("-fx-font-size: 24px; -fx-font-weight: bold;");

        favButton = new Button("❤️‍");
        favButton.setStyle("-fx-font-size: 24px; -fx-font-weight: bold;");

        if (mediaPlayer != null && mediaPlayer.getStatus() != Status.PLAYING) {
            mediaPlayer.play();
        }

        saveButton.setOnAction(e -> {

            if (selectedProperty != null) {
                if (count == 0) { // for click only one time
                    saveButton.setText("✅");
                    saveButton.setStyle("-fx-font-size: 24px; -fx-font-weight: bold;-fx-text-fill: #4ae10af6");
                    HoriScrollMyPlayList obj = new HoriScrollMyPlayList();
                    obj.addMyPlayListSong(selectedProperty);
                    count++;
                }
            }
        });

        favButton.setOnAction(e -> {

            if (selectedProperty != null) {
                if (count1 == 0) { // for click only one time
                    favButton.setStyle("-fx-font-size: 24px; -fx-font-weight: bold;-fx-text-fill: #e10a0af6;");
                    HoriScrollFavList obj = new HoriScrollFavList();
                    obj.addRecentlyPlayedSong(selectedProperty);
                    count1++;
                }
            }
        });

        playButton.setOnAction(e -> {
            if (mediaPlayer != null && mediaPlayer.getStatus() != Status.PLAYING) {
                playButton.setText("||");
                if (toggleForVerticalScroollabelPlayList) {
                    selectedProperty.changeButtonIcon();
                }
                mediaPlayer.play();
                rt.play();
            }
            if (mediaPlayer != null && mediaPlayer.getStatus() == Status.PLAYING) {
                playButton.setText("▶");
                if (toggleForVerticalScroollabelPlayList) {
                    selectedProperty.changeButtonIcon();
                }
                mediaPlayer.pause();
                rt.stop();
            }
        });

        volumeSlider = new Slider(0, 1, 0.4);
        volumeSlider.valueProperty().addListener((observable, oldValue, newValue) -> {
            if (mediaPlayer != null) {
                mediaPlayer.setVolume(newValue.doubleValue());
            }
        });

        Label volumetext = new Label("Volume");
        volumetext.setStyle("-fx-font-size: 20px; -fx-font-weight: bold;");
        volumetext.setPadding(new Insets(0, 0, 0, 10));

        // ProgressBar
        progressBar = new ProgressBar(0.0);
        progressBar.setMaxWidth(330);
        progressBar.setMinHeight(0.2);
        durationForSong = media.getDuration();

        durationLabel = new Label(0.0 + formatDuration(durationForSong));

        mediaPlayer.currentTimeProperty().addListener(new InvalidationListener() {

            @Override
            public void invalidated(Observable observable) {
                updateProgressBarAndDuration();
            }
        });

        mediaPlayer.setOnReady(() -> {
            progressBar.setDisable(false);
            durationLabel.setText("0.00 / " + formatDuration(durationForSong));
        });

        progressBar.setOnMouseClicked(event -> {
            double x = event.getX() / progressBar.getWidth();
            mediaPlayer.seek(durationForSong.multiply(x));
        });

        VBox containerForProgressBar = new VBox(5);
        containerForProgressBar.getChildren().addAll(progressBar, durationLabel);
        containerForProgressBar.setPadding(new Insets(10, 0, 0, 10));

        Circle circle = new Circle(100);
        circle.setFill(Color.web("#9f56e9"));

        StackPane stackPaneForInnerCircle = new StackPane();

        ImageView imageView = new ImageView(selectedProperty.getImageUrl());
        imageView.setFitWidth(180);
        imageView.setFitHeight(180);
        Rectangle roundedRectangle = new Rectangle(imageView.getFitWidth(), imageView.getFitHeight());
        roundedRectangle.setArcWidth(200);
        roundedRectangle.setArcHeight(200);
        imageView.setClip(roundedRectangle);

        // AnimationForImage
        rt = new RotateTransition(Duration.seconds(10), imageView);
        rt.setByAngle(360);
        rt.setCycleCount(RotateTransition.INDEFINITE);
        rt.play();

        stackPaneForInnerCircle.getChildren().add(imageView);

        StackPane stackPaneForCircle = new StackPane();
        stackPaneForCircle.getChildren().addAll(circle, imageView);
        stackPaneForCircle.setPadding(new Insets(20, 0, 0, 0));

        Label songName = new Label(selectedProperty.getSongName());
        songName.setStyle("-fx-font-size: 20px; -fx-font-weight: bold;");
        // songName.setAlignment(Pos.BASELINE_CENTER);

        StackPane stackPaneforName = new StackPane(songName);
        stackPaneforName.setAlignment(Pos.CENTER);

        HBox btnContainer = new HBox(5);
        btnContainer.getChildren().addAll(saveButton, previousButton, playButton, nextButton, favButton);
        btnContainer.setAlignment(Pos.CENTER);

        VBox containerForButtons = new VBox(10);
        containerForButtons.getChildren().addAll(stackPaneForCircle, stackPaneforName, btnContainer,
                containerForProgressBar, volumetext, volumeSlider);

        StackPane stackPane = new StackPane();
        stackPane.getChildren().addAll(stackPaneForCard, containerForButtons);
        stackPane.setAlignment(Pos.CENTER);
        stackPane.setPadding(new Insets(45, 0, 0, 50));

        root = new VBox(10);
        root.getChildren().addAll(mediaView, stackPane);

        container = new HBox();
        container.getChildren().add(root);

        return container;
    }

    private static String formatDuration(Duration duration) {

        int minute = (int) duration.toMinutes();
        int seconds = (int) (duration.toSeconds() % 60);

        return String.format("%d:%02d", minute, seconds);
    }

    private static void updateProgressBarAndDuration() {
        if (mediaPlayer != null && durationForSong != null) {

            double currentTime = mediaPlayer.getCurrentTime().toMillis();
            double totalDuration = durationForSong.toMillis();

            progressBar.setProgress(currentTime / totalDuration);
            durationLabel
                    .setText(formatDuration(mediaPlayer.getCurrentTime()) + " / " + formatDuration(durationForSong));
        }
    }
}
