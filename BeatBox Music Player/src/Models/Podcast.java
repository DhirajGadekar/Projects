package Models;

import javafx.geometry.Insets;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Rectangle;

public class Podcast {
    private Image title;
    private Label content;

    static ImageView imageView;

    Rectangle clip;
    Rectangle clipForContent;
    StackPane containerFor;

    public Podcast(Image string, Label string2){
        this.title = string;
        this.content = string2;
        //title.setStyle("-fx-font-size: 24px; -fx-font-weight: bold; -fx-text-fill: #131345;");
        content.setStyle("-fx-font-size: 24px; -fx-font-weight: bold; -fx-text-fill: #131345;");
    }
    

    public ImageView getTitle(){
        imageView = new ImageView(title);
        imageView.setFitWidth(350);
        imageView.setFitHeight(250);

        clip = new Rectangle(imageView.getFitWidth(), imageView.getFitHeight());
        clip.setArcWidth(30); 
        clip.setArcHeight(30); 
        imageView.setClip(clip);
        return imageView;
    }

    public StackPane getContent(){
        clipForContent = new Rectangle( 300, 50);
        clipForContent.setFill(Color.web("#636363"));
        clipForContent.setArcWidth(30); 
        clipForContent.setArcHeight(30);
        clipForContent.setOpacity(0.5);
        
        containerFor = new StackPane();
        containerFor.getChildren().addAll(clipForContent,content);
        containerFor.setPadding(new Insets(130, 0, 0, 0));
        return containerFor;
    }
}
