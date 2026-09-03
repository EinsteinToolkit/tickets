<html>
<head>
<title>Einstein Toolkit Thorn Documentation</title>
</head>
<body>
<h1>Einstein Toolkit Thorn Documentation<h1>
<h2>Thorn-specific documentation</h2>

<?php

$thorns = glob("*/*", GLOB_ONLYDIR);

$arrangements = array();
foreach($thorns as $thorn_path)
{
        $thorn = basename($thorn_path);
        $arrangement = dirname($thorn_path);
	$arrangements[$arrangement][] = $thorn;
}

foreach($arrangements as $name => $arrangement)
{
	echo "<h3>$name</h3>\n";
	foreach($arrangement as $thorn)
	{
		echo "<a href='$arrangement/$thorn'>$thorn</a><br />\n";
	}
}
?>

<h2>Arrangement-specific documentation</h2>

<?php

$arrangements = glob("*/documentation.html");
foreach($arrangements as $arrangement)
{
	$arr = dirname($arrangement);
	echo "<a href=$arr>$arr</a><br />";
}
?>
</body>
</html>
