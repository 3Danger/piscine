#!/bin/sh
# --format=format:%H affiche exclusivement les sha1 des 
# dernies commits de haut en bas, on redirige donc sa 
# sortie standard vers l'entree de head pour avoir les 5 plus recents
git log --format=format:%H | head -n 5