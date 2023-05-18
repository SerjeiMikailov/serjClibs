destination_dir="$(pwd)"

git clone https://github.com/SerjeiMikailov/mathlib.git "$destination_dir/mylib"

chmod +x "$destination_dir/mylib/install_mylib.sh"

"$destination_dir/mylib/install_mylib.sh"

echo "A biblioteca mylib foi instalada com sucesso em $destination_dir/mylib"
