jQuery(document).ready(function () {
	jQuery("#bouton_slider").click(function() {		
			if(jQuery('#banner').css('display')=='none'){	
				jQuery("#bouton_slider").text('cacher le slider');
				jQuery("#bouton_slider").css('cursor','n-resize');
				document.cookie="slider=show";
				jQuery('#banner').slideToggle(300);
			}else{
				jQuery("#bouton_slider").text('montrer le slider');
				jQuery("#bouton_slider").css('cursor','s-resize');
				document.cookie="slider=hidden";
				jQuery('#banner').slideToggle(300);
			}		
	});
});