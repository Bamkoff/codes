<?php
// dostep bezposredni jest niedozwolony
defined( '_JEXEC' ) or die( 'Restricted access' );?>

<!DOCTYPE html>

<html lang="PL-pl" xmlns="http://www.w3.org/1999/xhtml">  
  <head>
	<title>Studio Graficzne</title>
    <meta http-equiv="X-UA-Compatible" content="IE=edge"/>
    <meta name="viewport" content="width=device-width, initial-scale=1"/>
	<meta name="keywords" content="Grafika, Studio, Studio Graficzne, Grafiki, Zdjęcia"/>
	<meta name="description" content="Witryna studia graficznego"/>
    <link href="templates/Szablon_galerii_ver3_5/css/bootstrap.min.css" rel="stylesheet"/>
	<link href="templates/Szablon_galerii_ver3_5/css/style.css" rel="stylesheet"/>
  </head>
 

<body>
	<nav class="navbar navbar-inverse navbar-fixed-top" role="navigation">
	 <div class="container">
		<div class="cotainer-fluid">
			<div class="navbar-header">
				<button class="btn navbar-btn btn-primary"><a href="http://barfabi.cba.pl/studio_graficzne/#"><span class="glyphicon glyphicon-home text-white"></span></a></button>
				<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1" aria-expanded="false">
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
				</button>
			</div>
		</div>
		<div class="collapse navbar-collapse float-right" id="bs-example-navbar-collapse-1">
			<ul class="nav navbar-nav">
				<li class="pad-right"><button class="btn btn-primary navbar-btn"><a href="http://barfabi.cba.pl/studio_graficzne/index.php/8-menu-glowne/3-o-firmie"><span class="text-white" >O firmie</span></a></button></li>
				<li class="pad-right"><button class="btn btn-primary navbar-btn"><a href="http://barfabi.cba.pl/studio_graficzne/index.php/8-menu-glowne/4-zespol"><span class="text-white" >Zespół</span></a></button></li>
				<li class="pad-right"><button class="btn btn-primary navbar-btn"><a href="http://barfabi.cba.pl/studio_graficzne/index.php/8-menu-glowne/5-portfolio"><span class="text-white" >Portfolio</span></a></button></li>
				<li class="pad-right"><button class="btn btn-primary navbar-btn"><a href="http://barfabi.cba.pl/studio_graficzne/index.php/8-menu-glowne/6-kontakt"><span class="text-white" >Kontakt</span></a></button></li>
				<li><button class="btn btn-primary navbar-btn"><a href="http://barfabi.cba.pl/studio_graficzne/index.php/9-menu-glowne/aktualnosci"><span class="text-white" >Aktualności</span></a></button></li>
			</ul>
		</div>
	 </div>
	</nav> 

	<div class="container-fluid back-grey pad-top">
		<div class="row">
			<div class="col-xm-0 col-sm-1 col-md-2 col-lg-3"></div>
			
			<div class="col-xm-12 col-sm-10 col-md-8 col-lg-6 pad-zero">
				<jdoc:include type="modules" name="gora-srodek" style="xhtml" />
			</div>
			
			<div class="col-xm-0 col-sm-1 col-md-2 col-lg-3"></div>
		</div>
	</div>

	<div class="container-fluid">
		<div class="row pad-top">	
			<div class="col-xm-0 col-md-0 col-sm-2 col-lg-2"></div>
			<div class="col-xm-12 col-sm-12 col-md-8 col-lg-8 pad-top">
				<jdoc:include type="component" />
			</div>	
			<div class="col-xm-0 col-md-0 col-sm-2 col-lg-2"></div>
		</div>
	</div>

	<div class="container">
		<div class="row pad-top">
			<div class="col-xm-12 col-sm-12 col-md-4 col-lg-4 pad-top">
				<jdoc:include type="modules" name="dol-lewo" style="xhtml" />
			</div>	
			<div class="col-xm-12 col-sm-6 col-md-4 col-lg-4 pad-top">
				<jdoc:include type="modules" name="dol-srodek" style="xhtml" />
			</div>	
			<div class="col-xm-12 col-sm-6 col-md-4 col-lg-4 pad-top">
				<jdoc:include type="modules" name="dol-prawo" style="xhtml" />
			</div>	
		</div>
	</div>

    <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.3/jquery.min.js"></script>
    <script src="templates/Szablon_galerii_ver3_5/js/bootstrap.min.js"></script>
  </body>
</html>