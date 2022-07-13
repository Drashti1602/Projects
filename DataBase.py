import pyodbc
conn=pyodbc.connect('Driver={SQL Server};'
                    'Server=DESKTOP-U96C02C\SQLEXPRESS;'
                    'Database=My_DataBase;'
                    'Trusted_connection=yes;')
cursor = conn.cursor()
cursor.execute('select * from dbo.Data where id=1')
for row in cursor:
    print(row)