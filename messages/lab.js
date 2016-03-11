function parse(){

	var xmlhttp = new XMLHttpRequest();
	var url = "data.json";

	xmlhttp.onreadystatechange = function(){
		if (xmlhttp.readyState == 4 && xmlhttp.status == 200) {
			var myArr = JSON.parse(xmlhttp.responseText);	// contain the JSON code as text
			var elem = document.getElementById("messages");
			for (var i = 0; i < myArr.length; i++) {
			elem.innerHTML += "<h2>" + myArr[i].content + " " + myArr[i].username + "</h2>";
			}
		}
	}
	xmlhttp.open("GET", url, true);
	xmlhttp.send();
}