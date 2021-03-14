import os

from cs50 import SQL
from flask import Flask, flash, jsonify, redirect, render_template, request, session

# Configure application
app = Flask(__name__)

# Ensure templates are auto-reloaded
app.config["TEMPLATES_AUTO_RELOAD"] = True

# Configure CS50 Library to use SQLite database
db = SQL("sqlite:///birthdays.db")

@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "POST":

        # TODO: Add the user's entry into the database
        name = request.form.get('name')
        month = request.form.get('month')
        day = request.form.get('day')

        sql_insert_command = """
            INSERT INTO birthdays (name, month, day)
            VALUES (?, ?, ?)
        """
        db.execute(sql_insert_command, name, month, day)
        return redirect("/")

    else:

        # TODO: Display the entries in the database on index.html
        sql_query_command = """
            SELECT name, month, day
            FROM birthdays
            ORDER BY month, day;
        """
        birthdays = db.execute(sql_query_command)
        return render_template("index.html", birthdays=birthdays)


