package Widgets;

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.scene.control.Label;
import javafx.scene.control.ListCell;
import javafx.scene.control.ListView;
import javafx.scene.control.ScrollPane;
import javafx.scene.image.Image;
import javafx.scene.layout.HBox;
import Models.PlayListWidget;


public class ScrollabelPlayListWidget {

    static ScrollPane scrollPane;

     static ObservableList<PlayListWidget> arjitList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://pagalfree.com/images/192Shayad%20-%20Love%20Aaj%20Kal%20192%20Kbps.jpg"), new Label("Shayad"),"https://pagalfree.com/musics/192-Shayad%20-%20Love%20Aaj%20Kal%20192%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Khairiyat%20-%20Chhichhore%20128%20Kbps.jpg"), new Label("Khairiyat"),"https://pagalfree.com/musics/128-Khairiyat%20-%20Chhichhore%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://pagalfree.com/images/128Dil%20Na%20Jaaneya%20(Unplugged)%20-%20Good%20Newwz%20128%20Kbps.jpg"), new Label("Dil Na Jaaneya"),"https://pagalfree.com/musics/128-Dil%20Na%20Jaaneya%20(Unplugged)%20-%20Good%20Newwz%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Kalank%20(Bonus%20Track)%20-%20Kalank%20128%20Kbps.jpg"), new Label("Kalank"),"https://pagalfree.com/musics/128-Kalank%20(Bonus%20Track)%20-%20Kalank%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Tu%20Hi%20Yaar%20Mera%20-%20Pati%20Patni%20Aur%20Woh%20128%20Kbps.jpg"), new Label("Tu hi hai yaar Mera"),"https://pagalfree.com/musics/128-Tu%20Hi%20Yaar%20Mera%20-%20Pati%20Patni%20Aur%20Woh%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Roke%20Na%20Ruke%20Naina-%20Badrinath%20Ki%20Dulhania%20128%20Kbps.jpg"), new Label("Roke Na Ruke Naina"),"https://pagalfree.com/musics/128-Roke%20Na%20Ruke%20Naina-%20Badrinath%20Ki%20Dulhania%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Soch%20Na%20Sake%20-%20Airlift%20128%20Kbps.jpg"), new Label("Soch Na Sake"),"https://pagalfree.com/musics/128-Soch%20Na%20Sake%20-%20Airlift%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Janam%20Janam%20-%20Dilwale%20128%20Kbps.jpg"), new Label("Janam Janam"),"https://pagalfree.com/musics/128-Janam%20Janam%20-%20Dilwale%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://pagalfree.com/images/128Baatein%20Ye%20Kabhi%20Na%20(Male)%20-%20Khamoshiyan%20128%20Kbps.jpg"), new Label("Baatein Ye Kabhi na"),"https://pagalfree.com/musics/128-Baatein%20Ye%20Kabhi%20Na%20(Male)%20-%20Khamoshiyan%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Muskurane%20(Romantic)%20-%20Citylights%20128%20Kbps.jpg"), new Label("Muskurane"),"https://pagalfree.com/musics/128-Muskurane%20(Romantic)%20-%20Citylights%20128%20Kbps.mp3")
        
    );

    static ObservableList<PlayListWidget> shreyaList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://pagalfree.com/images/128Ghar%20More%20Pardesiya%20-%20Kalank%20128%20Kbps.jpg"), new Label("Ghar More Pardesiya"),"https://pagalfree.com/musics/128-Ghar%20More%20Pardesiya%20-%20Kalank%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Ghoomar%20-%20Padmaavat%20128%20Kbps.jpg"), new Label("Ghoomer"),"https://pagalfree.com/musics/128-Ghoomar%20-%20Padmaavat%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://pagalfree.com/images/128Aatach%20Baya%20Ka%20Baavarla%20-%20Sairat%20128%20Kbps.jpg"), new Label("Aatach Baya Ka Bavaral"),"https://pagalfree.com/musics/128-Aatach%20Baya%20Ka%20Baavarla%20-%20Sairat%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Deewani%20Mastani%20-%20Bajirao%20Mastani%20128%20Kbps.jpg"), new Label("Deewani Mastani"),"https://pagalfree.com/musics/128-Deewani%20Mastani%20-%20Bajirao%20Mastani%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Hasi%20(Female%20Version)%20-%20Hamari%20Adhuri%20Kahani%20128%20Kbps.jpg"), new Label("Hasi"),"https://pagalfree.com/musics/128-Hasi%20(Female%20Version)%20-%20Hamari%20Adhuri%20Kahani%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Manwa%20Laage%20-%20Happy%20New%20Year%20128%20Kbps.jpg"), new Label("Manva Lage"),"https://pagalfree.com/musics/128-Manwa%20Laage%20-%20Happy%20New%20Year%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Drama%20Queen%20-%20Hasee%20Toh%20Phasee%20128%20Kbps.jpg"), new Label("Drama Queen"),"https://pagalfree.com/musics/128-Drama%20Queen%20-%20Hasee%20Toh%20Phasee%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Samjhawan%20-%20Humpty%20Sharma%20Ki%20Dulhania%20128%20Kbps.jpg"), new Label("Samajawaan"),"https://pagalfree.com/musics/128-Samjhawan%20-%20Humpty%20Sharma%20Ki%20Dulhania%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://pagalfree.com/images/128Sunn%20Raha%20Hai%20(Female)%20-%20Aashiqui%202%20128%20Kbps.jpg"), new Label("Sun Raha Hai"),"https://pagalfree.com/musics/128-Sunn%20Raha%20Hai%20(Female)%20-%20Aashiqui%202%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Nagada%20Sang%20Dhol%20-%20Goliyon%20Ki%20Raasleela%20Ram%20Leela%20128%20Kbps.jpg"), new Label("Nagada Sang Dhol Bhaje"),"https://pagalfree.com/musics/128-Nagada%20Sang%20Dhol%20-%20Goliyon%20Ki%20Raasleela%20Ram%20Leela%20128%20Kbps.mp3")
        
    );

    static ObservableList<PlayListWidget> ajayAtulList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://a10.gaanacdn.com/images/albums/57/64957/crop_480x480_64957.jpg"), new Label("Deva Shree Ganesha"),"https://pagalfree.com/musics/128-Deva%20Shree%20Ganesha%20-%20Agneepath%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://i.pinimg.com/originals/89/54/ed/8954ed041ecc96b0a388d1fd1e716050.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://daily.jstor.org/wp-content/uploads/2023/01/good_times_with_bad_music_1050x700.jpg"), new Label("Mann Le"),"https://pagalfree.com/musics/128-Maan%20Le%20-%20Chitrakut%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQo73YZEBRg5OVzatAF8oBb7gYrVCPjDQSomWc9l4kB154yFRr_Mt4n2ppNFO6mLjdTPRc&usqp=CAU"), new Label("Kijo kesari ke lal"),"https://aac.saavncdn.com/168/77029e85bafffdba01e5efca854999cc_320.mp4"),
        new PlayListWidget(new Image("https://i.ytimg.com/vi/OhVtC41n7X0/maxresdefault.jpg"), new Label("Hanuman Chalisa"),"https://pagalfree.com/musics/128-Jai%20Hanuman%20Gyan%20Gun%20Sagar%20-%20Maruti%20Mera%20Dosst%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Ye tune kya kiya"),"https://pagalfree.com/musics/128-Ye%20Tune%20Kya%20Kiya%20-%20Once%20Upon%20A%20Time%20In%20Mumbaai%20Dobara%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://i.ytimg.com/vi/YIBo4yvLkfU/maxresdefault.jpg"), new Label("Hau me"),"https://pagalfree.com/musics/128-Hua%20Main%20-%20Animal%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQLve2HFuzK_GfPu0OesOKvO2546vvfSIHoopv-rUMRcrWSH00oVXWYdf0jPTEdlUnFwRU&usqp=CAU"), new Label("Teri Mitti"),"https://pagalfree.com/musics/128-Teri%20Mitti%20-%20Female%20Version%20-%20Kesari%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://i1.sndcdn.com/artworks-000007062388-xiwflc-t500x500.jpg"), new Label("Aasman Ko Chhukar"),"https://pagalfree.com/musics/128-Aasman%20Ko%20Chukar%20-%20Hanuman%20Returns%20128%20Kbps.mp3")
        
    );

    static ObservableList<PlayListWidget> KKList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://i.ytimg.com/vi/YIBo4yvLkfU/maxresdefault.jpg"), new Label("Hau me"),"https://pagalfree.com/musics/128-Hua%20Main%20-%20Animal%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQo73YZEBRg5OVzatAF8oBb7gYrVCPjDQSomWc9l4kB154yFRr_Mt4n2ppNFO6mLjdTPRc&usqp=CAU"), new Label("Kijo kesari ke lal"),"https://aac.saavncdn.com/168/77029e85bafffdba01e5efca854999cc_320.mp4"),
        new PlayListWidget(new Image("https://i.ytimg.com/vi/OhVtC41n7X0/maxresdefault.jpg"), new Label("Hanuman Chalisa"),"https://pagalfree.com/musics/128-Jai%20Hanuman%20Gyan%20Gun%20Sagar%20-%20Maruti%20Mera%20Dosst%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://a10.gaanacdn.com/images/albums/57/64957/crop_480x480_64957.jpg"), new Label("Deva Shree Ganesha"),"https://pagalfree.com/musics/128-Deva%20Shree%20Ganesha%20-%20Agneepath%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://i.pinimg.com/originals/89/54/ed/8954ed041ecc96b0a388d1fd1e716050.jpg"), new Label("Bappa"),"https://pagalfree.com/musics/128-Bappa%20-%20Banjo%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://daily.jstor.org/wp-content/uploads/2023/01/good_times_with_bad_music_1050x700.jpg"), new Label("Mann Le"),"https://pagalfree.com/musics/128-Maan%20Le%20-%20Chitrakut%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://c.saavncdn.com/243/Once-Upon-A-Time-In-Mumbaai-Dobara-2013-500x500.jpg"), new Label("Ye tune kya kiya"),"https://pagalfree.com/musics/128-Ye%20Tune%20Kya%20Kiya%20-%20Once%20Upon%20A%20Time%20In%20Mumbaai%20Dobara%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQLve2HFuzK_GfPu0OesOKvO2546vvfSIHoopv-rUMRcrWSH00oVXWYdf0jPTEdlUnFwRU&usqp=CAU"), new Label("Teri Mitti"),"https://pagalfree.com/musics/128-Teri%20Mitti%20-%20Female%20Version%20-%20Kesari%20128%20Kbps.mp3"), 
        new PlayListWidget(new Image("https://i1.sndcdn.com/artworks-000007062388-xiwflc-t500x500.jpg"), new Label("Aasman Ko Chhukar"),"https://pagalfree.com/musics/128-Aasman%20Ko%20Chukar%20-%20Hanuman%20Returns%20128%20Kbps.mp3")
        
    );

    static ObservableList<PlayListWidget> sonuNigamList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://pagalfree.com/images/128Baap%20Baap%20Hota%20Hai%20-%20Sonu%20Nigam%20128%20Kbps.jpg"), new Label("Baap Baap Hota Hai"),"https://pagalfree.com/musics/128-Baap%20Baap%20Hota%20Hai%20-%20Sonu%20Nigam%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Abhi%20Mujh%20Mein%20Kahin%20-%20Agneepath%20128%20Kbps.jpg"), new Label("Abhi Mujh mein kabhi"),"https://pagalfree.com/musics/128-Abhi%20Mujh%20Mein%20Kahin%20-%20Agneepath%20128%20Kbps.mp3"),  
        new PlayListWidget(new Image("https://pagalfree.com/images/128Suraj%20Hua%20Maddham%20-%20My%20Name%20Is%20Khan%20128%20Kbps.jpg"), new Label("Suraj Hua Maddham"),"https://pagalfree.com/musics/128-Suraj%20Hua%20Maddham%20-%20My%20Name%20Is%20Khan%20128%20Kbps.mp3"), 
	new PlayListWidget(new Image("https://pagalfree.com/images/128Sun%20Zara%20-%20Lucky%20No%20Time%20For%20Love%20128%20Kbps.jpg"), new Label("Sun zara"),"https://pagalfree.com/musics/128-Sun%20Zara%20-%20Lucky%20No%20Time%20For%20Love%20128%20Kbps.mp3"),
	new PlayListWidget(new Image("https://pagalfree.com/images/128Main%20Agar%20Kahoon%20-%20Om%20Shanti%20Om%20128%20Kbps.jpg"), new Label("Main Agar Kahoon"),"https://pagalfree.com/musics/128-Main%20Agar%20Kahoon%20-%20Om%20Shanti%20Om%20128%20Kbps.mp3"),
	new PlayListWidget(new Image("https://pagalfree.com/images/128Aisa%20Deewana%20-%20Dil%20Maange%20More%20128%20Kbps.jpg"), new Label("Aisa Deewana"),"https://pagalfree.com/musics/128-Aisa%20Deewana%20-%20Dil%20Maange%20More%20128%20Kbps.mp3"),
	new PlayListWidget(new Image("https://pagalfree.com/images/128Main%20Hoon%20Na%20-%20Main%20Hoon%20Na%20128%20Kbps.jpg"), new Label("Main Hoon na"),"https://pagalfree.com/musics/128-Main%20Hoon%20Na%20-%20Main%20Hoon%20Na%20128%20Kbps.mp3"),
	new PlayListWidget(new Image("https://pagalfree.com/images/128Tumse%20Milke%20Dil%20Ka%20-%20Main%20Hoon%20Na%20128%20Kbps.jpg"), new Label("Tumse Milke Dil Ka"),"https://pagalfree.com/musics/128-Tumse%20Milke%20Dil%20Ka%20-%20Main%20Hoon%20Na%20128%20Kbps.mp3"),
	new PlayListWidget(new Image("https://pagalfree.com/images/128Sapna%20Jahan%20-%20Brothers%20128%20Kbps.jpg"), new Label("Sapna Jahan"),"https://pagalfree.com/musics/128-Sapna%20Jahan%20-%20Brothers%20128%20Kbps.mp3"),
	new PlayListWidget(new Image("https://pagalfree.com/images/128Pyaar%20Ki%20Ek%20Kahani%20-%20Krrish%20128%20Kbps.jpg"), new Label("Pyyar ki ek kahani"),"https://pagalfree.com/musics/128-Pyaar%20Ki%20Ek%20Kahani%20-%20Krrish%20128%20Kbps.mp3")
    );

    static ObservableList<PlayListWidget> lataDidiList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://pagalfree.com/images/128Maye%20Ni%20Maye-Lata%20Mangeshkar%20-%20Hum%20Aapke%20Hain%20Koun%20128%20Kbps.jpg"), new Label("Didi Tera Dever Deewana"),"https://pagalfree.com/musics/128-Didi%20Tera%20Devar%20Deewana%20-%20Hum%20Aapke%20Hain%20Koun%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Maye%20Ni%20Maye-Lata%20Mangeshkar%20-%20Hum%20Aapke%20Hain%20Koun%20128%20Kbps.jpg"), new Label("Chocolate Lime Juice"),"https://pagalfree.com/musics/128-Chocolate%20Lime%20Juice%20-%20Hum%20Aapke%20Hain%20Koun%20128%20Kbps.mp3"),       
        new PlayListWidget(new Image("https://pagalfree.com/images/128Maye%20Ni%20Maye-Lata%20Mangeshkar%20-%20Hum%20Aapke%20Hain%20Koun%20128%20Kbps.jpg"), new Label("Lo Chali Mein"),"https://pagalfree.com/musics/128-Lo%20Chali%20Main%20-%20Hum%20Aapke%20Hain%20Koun%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Cheez%20Badi%20-%20Machine%20128%20Kbps.jpg"), new Label("Cheeze Badi Hai Mast"),"https://pagalfree.com/musics/128-Cheez%20Badi%20-%20Machine%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Ek%20Haseena%20Ek%20Deewana%20-%20Deewana%20Main%20Deewana%20128%20Kbps.jpg"), new Label("Ek Haseena Ek Deewana"),"https://pagalfree.com/musics/128-Ek%20Haseena%20Ek%20Deewana%20-%20Deewana%20Main%20Deewana%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Kuch%20Kuch%20Hota%20Hai%20-%20My%20Name%20Is%20Khan%20128%20Kbps.jpg"), new Label("Kuch Kuch Hota Hai"),"https://pagalfree.com/musics/128-Kuch%20Kuch%20Hota%20Hai%20-%20My%20Name%20Is%20Khan%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Sona%20Chandi%20-%20Sarhad%20Paar%20128%20Kbps.jpg"), new Label("Sona Chandi"),"https://pagalfree.com/musics/128-Sona%20Chandi%20-%20Sarhad%20Paar%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Pyar%20Lo%20Pyar%20Do%20-%20Don%20Muthu%20Swami.jpg"), new Label("Pyaar Lo Pyaar Do"),"https://pagalfree.com/musics/128-Pyar%20Lo%20Pyar%20Do%20-%20Don%20Muthu%20Swami.mp3"), 
        new PlayListWidget(new Image("https://pagalfree.com/images/128Ek%20Ladki%20Bheegi%20Bhaagi%20Si%20-%20Ajay%20Keswani%20128%20Kbps.jpg"), new Label("Ek Ladki Bheegi Bhagi si"),"https://pagalfree.com/musics/128-Ek%20Ladki%20Bheegi%20Bhaagi%20Si%20-%20Ajay%20Keswani%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Kasam%20Ki%20Kasam%20-%20Main%20Prem%20Ki%20Diwani%20Hoon%20128%20Kbps.jpg"), new Label("Kasam ki Kasam"),"https://pagalfree.com/musics/128-Kasam%20Ki%20Kasam%20-%20Main%20Prem%20Ki%20Diwani%20Hoon%20128%20Kbps.mp3")
    );

    static ObservableList<PlayListWidget> ARRehmanList = FXCollections.observableArrayList(
        new PlayListWidget(new Image("https://pagalfree.com/images/128The%20Humma%20Song%20-%20OK%20Jaanu%20128%20Kbps.jpg"), new Label("The Humma Song"),"https://pagalfree.com/musics/128-The%20Humma%20Song%20-%20OK%20Jaanu%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Mohenjo%20Mohenjo%20-%20Mohenjo%20Daro%20128%20Kbps.jpg"), new Label("Mohenjo Mohenjo"),"https://pagalfree.com/musics/128-Mohenjo%20Mohenjo%20-%20Mohenjo%20Daro%20128%20Kbps.mp3"),
        new PlayListWidget(new Image("https://pagalfree.com/images/128Matargashti%20-%20Tamasha%20128%20Kbps.jpg"), new Label("Matargashti"),"https://pagalfree.com/musics/128-Matargashti%20-%20Tamasha%20128%20Kbps.mp3"),   
	    new PlayListWidget(new Image("https://pagalfree.com/images/128The%20Land%20Of%20Shiva%20-%20Raanjhanaa%20128%20Kbps.jpg"), new Label("The Lord Of Shiva"),"https://pagalfree.com/musics/128-The%20Land%20Of%20Shiva%20-%20Raanjhanaa%20128%20Kbps.mp3"),  
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Tum%20Tak%20-%20Raanjhanaa%20128%20Kbps.jpg"), new Label("Tum Tak"),"https://pagalfree.com/musics/128-Tum%20Tak%20-%20Raanjhanaa%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Challa%20-%20Jab%20Tak%20Hai%20Jaan%20128%20Kbps.jpg"), new Label("Challa"),"https://pagalfree.com/musics/128-Challa%20-%20Jab%20Tak%20Hai%20Jaan%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Luka%20Chuppi%20-%20Rang%20De%20Basanti%20128%20Kbps.jpg"), new Label("Lukka Chuppi"),"https://pagalfree.com/musics/128-Luka%20Chuppi%20-%20Rang%20De%20Basanti%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128Chupke%20Se%20-%20Saathiya%20128%20Kbps.jpg"), new Label("Chupke Se"),"https://pagalfree.com/musics/128-Chupke%20Se%20-%20Saathiya%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128O%20Paalanhaare%20-%20Lagaan%20128%20Kbps.jpg"), new Label("O Palnahare"),"https://pagalfree.com/musics/128-O%20Paalanhaare%20-%20Lagaan%20128%20Kbps.mp3"),
	    new PlayListWidget(new Image("https://pagalfree.com/images/128O%20Paalanhaare%20-%20Lagaan%20128%20Kbps.jpg"), new Label(" Yeh Hassen vadiya"),"https://pagalfree.com/musics/128-Yeh%20Haseen%20Vadiyan%20Yeh%20Khula%20Aasman%20-%20Roja%20128%20Kbps.mp3")
    );



    private static ScrollPane display(ObservableList<PlayListWidget> singerList) {
        
        ListView<PlayListWidget> listView = new ListView<>(singerList);
        listView.setCellFactory(param -> new CardCell());

        scrollPane = new ScrollPane(listView);
        scrollPane.setMaxWidth(400);
        scrollPane.setMinHeight(450);
        scrollPane.setFitToWidth(true);
        scrollPane.setFitToHeight(true);

        return scrollPane;
    }
//getKKList
    public static ScrollPane getAjayAtulList(){

        return display(ajayAtulList);
    }    

//getArjitList
    public static ScrollPane getArjitList(){

        return display(arjitList);
    }

//getShreyaList
    public static ScrollPane getShreyaList(){

        return display(shreyaList);
    }

//getSonuList
    public static ScrollPane getSonuNigamList(){

        return display(sonuNigamList);
    }

//getKKList
    public static ScrollPane getKKList(){

        return display(KKList);
    } 

//getLatadidi 
    public static ScrollPane getLataDidiList(){

        return display(lataDidiList);
    }
//getARRehman
    public static ScrollPane getArRehmanList(){

        return display(ARRehmanList);
    }
}

class CardCell extends ListCell<PlayListWidget> {
    @Override
    protected void updateItem(PlayListWidget item, boolean empty) {
        super.updateItem(item, empty);

        if (item != null && !empty) {
            HBox cardLayout = new HBox(20);
            cardLayout.getChildren().add(item.getTitle());
            cardLayout.getChildren().add(item.getContent());
            cardLayout.getChildren().add(item.getIconButton());
            setGraphic(cardLayout);
        } else {
            setGraphic(null);
        }
    }
}
