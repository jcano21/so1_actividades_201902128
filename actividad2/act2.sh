#!/bin/bash


github_user=${GITHUB_USER:-"jcano21"}

url="https://api.github.com/users/$github_user"
response=$(curl -s "$url")

id=$(echo "$response" | jq -r '.id')
created_at=$(echo "$response" | jq -r '.created_at')

mensaje="Hola $github_user. User ID: $id. Cuenta fue creada el: $created_at."

echo "$mensaje"

fecha=$(date +"%Y-%m-%d")
log_file="/tmp/$fecha/saludos.log"
echo "$mensaje" >> "$log_file"

crontab -e
echo "*/5 * * * * $0 >> $log_file 2>&1" >> crontab