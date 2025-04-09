
import './Body.css';
import { imageUrls } from '../assets/imageUrls';

export default function Body() {
    return (
        <div className="body">
            <div className="body-heading">
                <h2>What's on your mind?</h2>
                <div className="arrow-btns">
                    <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="#686b78" class="bi bi-arrow-left-circle-fill" viewBox="0 0 16 16">
                        <path d="M8 0a8 8 0 1 0 0 16A8 8 0 0 0 8 0m3.5 7.5a.5.5 0 0 1 0 1H5.707l2.147 2.146a.5.5 0 0 1-.708.708l-3-3a.5.5 0 0 1 0-.708l3-3a.5.5 0 1 1 .708.708L5.707 7.5z" />
                    </svg>
                    <svg xmlns="http://www.w3.org/2000/svg" width="30" height="30" fill="#686b78" class="bi bi-arrow-right-circle-fill" viewBox="0 0 16 16">
                        <path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0M4.5 7.5a.5.5 0 0 0 0 1h5.793l-2.147 2.146a.5.5 0 0 0 .708.708l3-3a.5.5 0 0 0 0-.708l-3-3a.5.5 0 1 0-.708.708L10.293 7.5z" />
                    </svg>
                </div>
            </div>
            <div className="body-container">
                {imageUrls.map((imageUrl, index) => (
                    <img key={index} src={imageUrl} alt={`Image ${index + 1}`} />
                ))}
            </div>
        </div>
    )
}