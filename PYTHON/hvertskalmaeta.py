municipality = dict()
municipality["Reykjavik"] = ["Reykjavik", "Kopavogur", "Hafnarfjordur", \
"Reykjanesbaer", "Gardabaer", "Mosfellsbaer", "Arborg", "Akranes", "Seltjarnarnes"]

municipality["Akureyri"] = ["Akureyri", "Fjardabyggd", "Mulathing" ]

n = input()
if n in municipality["Reykjavik"]: print("Reykjavik")
elif n in municipality["Akureyri"]: print("Akureyri")