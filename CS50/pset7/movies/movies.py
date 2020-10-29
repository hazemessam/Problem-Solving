#!/usr/bin/python3
import sqlite3
from sys import argv
from test import testQuery


problem_id = int(argv[1])
sql_query = None

with open(f'{problem_id}.sql', 'r') as file:
    sql_query = file.read().strip()
    
con = sqlite3.connect('movies.db')
cur = con.cursor()

try:
    cur.execute(sql_query)
    records = cur.fetchall()
    
    for record in records:
        print(record)

    num_of_rows = len(records)
    num_of_columns = len(records[0])
    print(testQuery(num_of_rows, num_of_columns, problem_id))
except Exception as e:
    print(e)
finally:
    cur.close()
    con.close()



