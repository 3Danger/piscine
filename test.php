<?php 
$test_files = (glob( __DIR__ . "/*/src/*/test.php"));

foreach($test_files as $file) {
    if (!(bool) require_once $file) {
        echo("Err on exercice : " . $file . PHP_EOL);
    } else {
        echo("Exercice succeed : ". $file . PHP_EOL);
    }
}