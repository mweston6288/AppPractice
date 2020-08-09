const input = document.getElementById("input");
const preview = document.getElementById("preview");

input.addEventListener("input", function(e){
	let value = input.value;
	preview.style.setProperty("border-radius", value + "px");
})