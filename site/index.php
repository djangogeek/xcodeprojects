<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
   "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="fr" xml:lang="fr">
<head>
 <title>My page title</title>
</head>
<body>
<h1>Titre 1</h1>
<p><?php 
/*error_reporting(0);*/
setlocale (LC_TIME, 'fr_FR');
echo strftime('%A %d %B %Y.');
?></p>

<h2><?php
echo 'Ceci est un titre 2 genere en php';

?></h2>
<p>Test variable : <?php
$var_test=1;
echo $var_test;
$tab1=array('un', 2,'trois');echo $tab1[0];echo $tab1[1];echo $tab1[2];
?></p>

<br>
<a href="bienvenue1.php?=luigi">Bonjour, je m'appelle luigi!</a>
<?php
$output = shell_exec('ls -la');
echo "<pre>$output</pre>";
?>

</body>
</html>