package Models;

import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.shape.Rectangle;

public class Guide {
    private Image title;
    private Label content;

    static ImageView imageView;

    Rectangle clip;

    public Guide(Image string, Label string2){
        this.title = string;
        this.content = string2;
        //title.setStyle("-fx-font-size: 24px; -fx-font-weight: bold; -fx-text-fill: #131345;");
        content.setStyle("-fx-font-size: 24px; -fx-font-weight: bold; -fx-text-fill: #131345;");
    }
    

    public ImageView getTitle(){
        imageView = new ImageView(title);
        imageView.setFitWidth(60);
        imageView.setFitHeight(60);

        clip = new Rectangle(imageView.getFitWidth(), imageView.getFitHeight());
        clip.setArcWidth(30); 
        clip.setArcHeight(30); 
        imageView.setClip(clip);
        return imageView;
    }

    public ImageView getCircularImage(){
        imageView = new ImageView(title);
        imageView.setFitWidth(100);
        imageView.setFitHeight(100);

        clip = new Rectangle(imageView.getFitWidth(), imageView.getFitHeight());
        clip.setArcWidth(100); 
        clip.setArcHeight(100); 
        imageView.setClip(clip);
        return imageView;
    }


    public Label getContent(){
        return content;
    }
}
