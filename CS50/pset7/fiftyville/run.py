#!/usr/bin/python3
import sqlite3


query = None
with open('log.sql', 'r') as file:
    query = file.read().strip()

con = sqlite3.connect('fiftyville.db')
cur = con.cursor()

cur.execute(query)
for record in cur.fetchall():
    print(record)

cur.close()
con.close()