from flask import Flask
app = Flask(_name_)

@app.route("/")
def hello():
    return "Hello World!"

@app.route("/grid/<name>")
def grid(name = "jasper"):
    return """
	<div class = "white-box nametag spinny">
	    JASPER
	</div>
	"""

if _name_ == "_main_":
    app.run()

