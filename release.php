<?php 
$release_files = (glob( __DIR__ . "/*/src/*/release.php"));

foreach($release_files as $file) {
    require_once $file;
    echo("Exercice released : ". $file . PHP_EOL);
}