#!/usr/bin/env bash


echo $portNumber

echo "======================================================================================"
echo "=== // Starting Apache..."
service httpd start
echo "=== // Done! Apache started."
echo "======================================================================================"
echo ""
echo "======================================================================================"
echo "=== // Starting MySQL..."
service mysqld start
echo "=== // Done! MySQL started."
echo "======================================================================================"
echo ""
echo "======================================================================================"
echo "=== // Copying over files remaining files..."
cp -r /var/www/html-temp/. /var/www/html
echo "=== // Done! Files copied."
echo "======================================================================================"
echo ""
echo "======================================================================================"
echo "=== // Setting up the EdWeb base_url variable... (sorry)"
sed -i -e "315s/.*/\$base_url=\"http:\/\/192.168.10.10:"$portNumber"\";/" /var/www/html/sites/default/settings.php
echo "=== // Done! Variable set."
echo "======================================================================================"
echo ""
echo "======================================================================================"
echo "=== // Running supervisord..."
/usr/bin/supervisord