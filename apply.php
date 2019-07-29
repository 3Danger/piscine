<?php 
$apply_file = (glob( __DIR__ . "/*/src/*/apply.php"));

foreach($release_files as $file) {
    require_once $file;
    echo("Exercice applied : ". $file . PHP_EOL);
}