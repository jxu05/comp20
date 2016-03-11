Identify what aspects of the work have been correctly implemented and what have not.
	1. JSON data is parsed via JavaScript's XMLHttpRequest object.
	2. JSON data is output and displayed by loading HTML file.
	3. The message displaying is modified by the CSS file.

Identify anyone with whom you have collaborated or discussed the assignment.
	N/A.

Say approximately how many hours you have spent completing the assignment.
	2 hours.


Important question for this lab: is it possible to request the data from a different origin (e.g., http://messagehub.herokuapp.com/) or from your local machine (from file:///) from using XMLHttpRequest? Why or why not?
	No.
	These kinds of data are separated by origin. JavaScript's XMLHttpRequest in one origin cannot read from or write to the storage belonging to another origin according to the same-origin policy.