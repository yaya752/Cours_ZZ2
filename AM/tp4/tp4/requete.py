
import csv
import requests
import json

# URL de la requête POST
url = "http://localhost:8080/pixels"

# Chemin du fichier CSV
filename = "header.csv"

# Ouvrir le fichier CSV en mode lecture
with open(filename, "r") as csvfile:
    # Créer un objet de lecture CSV avec des en-têtes de colonne
    csvreader = csv.DictReader(csvfile)

    # Parcourir chaque ligne du fichier CSV
    for row in csvreader:
        # Convertir les données de la ligne en un objet JSON
        coordinate = row["coordinate"].split(",")
        data = {
            
            "x": int (coordinate[0]),
            "y": int(coordinate[1]),
            "color": row["pixel_color"]
            

        }
        json_data = json.dumps(data)

        # Envoyer une requête POST avec les données JSON
        headers = {'Content-type': 'application/json'}
        response = requests.post(url, data=json_data, headers=headers)

