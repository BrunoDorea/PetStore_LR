Action()
{

	lr_start_transaction("PET_STORE_01_ENTER_THE_STORE");

	web_url("Catalog.action", 
		"URL={URL_BASE}/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_BASE}/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("PET_STORE_01_ENTER_THE_STORE",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("PET_STORE_02_SELECT_CATEGORY");

	web_url("Catalog.action_2", 
		"URL={URL_BASE}/actions/Catalog.action?viewCategory=&categoryId={categoryID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_BASE}/actions/Catalog.action", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://assets.msn.com/weathermapdata/1/static/weather/Icons/taskbar_v7/Condition/D200PartlySunnyV2.svg", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	lr_end_transaction("PET_STORE_02_SELECT_CATEGORY",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("PET_STORE_03_SELECT_PRODUCT_ID");

	web_url("Catalog.action_3", 
		"URL={URL_BASE}/actions/Catalog.action?viewProduct=&productId={productID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_BASE}/actions/Catalog.action?viewCategory=&categoryId={categoryID}", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://data-edge.smartscreen.microsoft.com/api/browser/edge/data/toptraffic/3?pushcert=false&os=10.0.23451.1000.ni_prerelease", "Referer=", ENDITEM, 
		"Url=https://data-edge.smartscreen.microsoft.com/api/browser/edge/data/bloomfilter/x/3?pushcert=false&os=10.0.23451.1000.ni_prerelease", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("PET_STORE_03_SELECT_PRODUCT_ID",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("PET_STORE_04_SELECT_ITEM_ID");

	web_url("Catalog.action_4", 
		"URL={URL_BASE}/actions/Catalog.action?viewItem=&itemId={itemID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_BASE}/actions/Catalog.action?viewProduct=&productId={productID}", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("PET_STORE_04_SELECT_ITEM_ID",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("PET_STORE_05_ADD_TO_CART");

	web_url("Cart.action", 
		"URL={URL_BASE}/actions/Cart.action?addItemToCart=&workingItemId={itemID}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL_BASE}/actions/Catalog.action?viewItem=&itemId={itemID}", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("PET_STORE_05_ADD_TO_CART",LR_AUTO);

	lr_think_time(3);

	return 0;
}