
destination_dir="$(pwd)"

git clone <https://github.com/SerjeiMikailov/mathlib.git> "$destination_dir/mylib"

cd "$destination_dir/mylib"

echo "A biblioteca mylib foi instalada com sucesso em $destination_dir/mylib"
