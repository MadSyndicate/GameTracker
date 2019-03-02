# GameTracker
it does stuff.

## setup
The ChampionLoader depends on the [CPPRestSDK](https://github.com/Microsoft/cpprestsdk) and SQLite3

installation on windows is recommended via [vcpkg](https://github.com/Microsoft/vcpkg)
```
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
.\vcpkg integrate install
vcpkg install cpprestsdk cpprestsdk:x64-windows
vcpkg install sqlite3:x64-windows
```