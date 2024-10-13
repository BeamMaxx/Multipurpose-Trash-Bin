// Get the modal
var modal = document.getElementById("myModal");

// Get the image and insert it inside the modal - use its "alt" text as a caption
var img = document.getElementById("map-icon-img1");
var modalImg = modal.querySelector(".modal-img");
var captionText = modal.querySelector("p");

// Get the <span> element that closes the modal
var span = modal.querySelector(".close");

// When the user clicks on the image, open the modal
img.onclick = function() {
  modal.style.display = "block";
}

// When the user clicks on <span> (x), close the modal
span.onclick = function() {
  modal.style.display = "none";
}

// When the user clicks anywhere outside of the modal, close it
window.onclick = function(event) {
  if (event.target == modal) {
    modal.style.display = "none";
  }
}
