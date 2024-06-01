import json
import glob
from pathlib import Path
import os

Filenames = [
	"purorogu",
	"maturi",
	"mihomi",
	"ayume",
	"moeko",
	"nenene",
	"grandroot",
	"ex1",
	"ex2",
	"ex3",
	"ex4",
	"ex5",
	"ex6",
	"ex7"
]

os.makedirs("Patched", exist_ok=True)

for i in range(len(Filenames)):
	try:
		file = open(f"Patches/{Filenames[i]}.json", "r", encoding="UTF-8")
	except:
		continue
	print(Filenames[i])
	patch = json.load(file)
	file.close()
	
	file = open(f"jsons/{Filenames[i]}.json", "r", encoding="UTF-8")
	DUMP = json.load(file)
	file.close()
	
	y = 0
	for x in range(len(DUMP["COMMANDS"])):
		if (DUMP["COMMANDS"][x]["LABEL"] == patch[y]["LABEL"]):
			DUMP["COMMANDS"][x] = patch[y]
			y += 1
			if (y == len(patch)):
				break
	
	assert(y == len(patch))

	os.makedirs(os.path.dirname(f"Patched/{Filenames[i]}.json"), exist_ok=True)
	new_file = open(f"Patched/{Filenames[i]}.json", "w", encoding="UTF-8")
	json.dump(DUMP, new_file, indent="\t", ensure_ascii=False)
	new_file.close()