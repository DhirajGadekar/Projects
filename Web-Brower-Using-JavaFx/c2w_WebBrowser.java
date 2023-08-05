
import javafx.application.Application;
import javafx.stage.Stage;
import javafx.stage.Screen;
import javafx.geometry.Rectangle2D;
import java.util.ArrayList;

public class c2w_WebBrowser extends Application {

    public static void main(String[] c2w_args) {
        launch(c2w_args);
    }

    private ArrayList<c2w_BrowserWindow> c2w_openWindows;
    private Rectangle2D c2w_screenRect;
    private double c2w_locationX, c2w_locationY;
    private double c2w_windowWidth, c2w_windowHeight;
    private int c2w_untitledCount;

    public void start(Stage stage) {

        c2w_openWindows = new ArrayList<c2w_BrowserWindow>();
        c2w_screenRect = Screen.getPrimary().getVisualBounds();
        c2w_locationX = c2w_screenRect.getMinX() + 30;
        c2w_locationY = c2w_screenRect.getMinY() + 20;
        c2w_windowHeight = c2w_screenRect.getHeight() - 160;
        c2w_windowWidth = c2w_screenRect.getWidth() - 130;
        if (c2w_windowWidth > c2w_windowHeight * 1.6)
            c2w_windowWidth = c2w_windowHeight * 1.6;

        c2w_newBrowserWindow("https://www.google.com");

    }

    ArrayList<c2w_BrowserWindow> getOpenWindowList() {
        return c2w_openWindows;
    }

    int c2w_getNextUntitledCount() {
        return ++c2w_untitledCount;
    }

    void c2w_newBrowserWindow(String c2w_url) {
        c2w_BrowserWindow window = new c2w_BrowserWindow(this, c2w_url);
        c2w_openWindows.add(window);
        window.setOnHidden(e -> {

            c2w_openWindows.remove(window);
            System.out.println("Number of open windows is " + c2w_openWindows.size());
            if (c2w_openWindows.size() == 0) {

                System.out.println("Program will end because all windows have been closed");
            }
        });
        if (c2w_url == null) {
            window.setTitle("c2w_Untitled " + c2w_getNextUntitledCount());
        }
        window.setX(c2w_locationX);
        window.setY(c2w_locationY);
        window.setWidth(c2w_windowWidth);
        window.setHeight(c2w_windowHeight);
        window.show();
        c2w_locationX += 30;
        c2w_locationY += 20;
        if (c2w_locationX + c2w_windowWidth + 10 > c2w_screenRect.getMaxX()) {

            c2w_locationX = c2w_screenRect.getMinX() + 30;
        }
        if (c2w_locationY + c2w_windowHeight + 10 > c2w_screenRect.getMaxY()) {

            c2w_locationY = c2w_screenRect.getMinY() + 20;
        }
    }
}