Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-AFS-CV", 
		"VypfjBJL5BaM1ezA39RIcK");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.23451; app=Microsoft Edge; appVer=112.0.1722.68; appChannel=stable; appInstallationId=6590404243600361798; region=BR;");

	web_url("homeCloud", 
		"URL=https://edge.microsoft.com/sync/v2/feeds/me/settings/homeCloud", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ANON=; DOMAIN=www.bing.com");

	web_add_cookie("MUID=35B64BF2C38D603B1306592EC2546189; DOMAIN=www.bing.com");

	web_add_cookie("_RwBf=ilt=0&ihpd=0&ispd=0&rc=613&rb=613&gb=0&rg=1850&pc=589&mtu=0&rbb=0&g=0&cid=&clo=0&v=1&l=2023-05-05T07:00:00.0000000Z&lft=0001-01-01T00:00:00.0000000&aof=0&o=0&p=None&c=MA13C5&t=519&s=2019-06-13T17:51:36.6183265+00:00&ts=2023-05-05T13:04:30.6082873+00:00&rwred=0&wls=2&lka=0&lkt=0&TH=&mta=0&e=ogqtKUa6YdUCj11xzw_6jMgjC5XYpQfNnQ-pufRsAcFyhnVW1Y1PAyJRX584J1zVwWnJpE_qO62v_i30msSnItu6-1m_HnJbYcn7rex6M5o&A=61451215952A6D180D20C1E9FFFFFFFF; DOMAIN=www.bing.com");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI2NTkwNDA0MjQzNjAwMzYxNzk4IiwiNSI6IlwiWHBYVWIyVUJKMVZOU3FHTmgrY2prQllHY1NCK2M5MHhycmVlaE1LUGZiND1cIiIsIjYiOiJzdGFibGUiLCI3IjoiMjk2MzUyNzQzNDI1IiwiOSI6ImRlc2t0b3AifQ==");

	web_url("DomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/DomainsFilterGlobal.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MC1=GUID=801be6edf569442eb72c80be3c47bc8f&HASH=801b&LV=202303&V=4&LU=1679509987045; DOMAIN=edge.microsoft.com");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"112.0.1722.68");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.23451");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_custom_request("msa", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"4a945acb,b9528075,82a866e9,e0075c8a,3f6a1a2,b70ce6c7,322c815,dee07e4,93277d03,b9047d\",\"enable_features\":\"1e558dd0,ddfd6cd3,49c628a9,60806046,8832ce78,3891021f,3b76ae01,faf0abfc,9f191260,8a2adb0,e7c29515,95a29f90,56181917,6a07a97c,a49949fb,58568926,1df7f9ab,8b578039,9155bb95,b9ce036a,60ff3cac,71272018,ace2c02,7bc7f5f7,badd9207,62fd93b7,50cbb1f,cd20ec4f,3e1e1ad1,3061cce0,f34a4bc1,b4627894,bda73cc8,7d2dcff4\"}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_url("nservice", 
		"URL=http://192.168.100.239:7678/nservice/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"chrome-extension://ejbalbakoplchlghecdalmeeeajnimhm");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("envelope", 
		"URL=https://sentry.io/api/273505/envelope/?sentry_key=3567c198f8a8412082d32655da2961d0&sentry_version=7", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"sent_at\":\"2023-05-05T14:02:12.378Z\",\"sdk\":{\"name\":\"sentry.javascript.browser\",\"version\":\"6.13.3\"}}\n{\"type\":\"session\"}\n{\"sid\":\"7edb48b66d414806be1e48839ee4aac2\",\"init\":true,\"started\":\"2023-05-05T14:02:12.378Z\",\"timestamp\":\"2023-05-05T14:02:12.378Z\",\"status\":\"ok\",\"errors\":0,\"attrs\":{\"release\":\"10.28.3\",\"environment\":\"production\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 "
		"Safari/537.36 Edg/112.0.1722.68\"}}", 
		LAST);

	web_url("hotlist.json", 
		"URL=https://static.metafi.codefi.network/api/v1/lists/hotlist.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_cookie("_EDGE_V=1; DOMAIN=www.bing.com");

	web_add_cookie("USRLOC=HS=1; DOMAIN=www.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=AB495E0BBDAA45F2A4F270C080206A33&dmnchg=1; DOMAIN=www.bing.com");

	web_add_cookie("MUIDB=35B64BF2C38D603B1306592EC2546189; DOMAIN=www.bing.com");

	web_add_cookie("WLS=C=19c5ad7be4b0a90a&N=Bruno; DOMAIN=www.bing.com");

	web_add_cookie("SRCHS=PC=U531; DOMAIN=www.bing.com");

	web_add_cookie("ABDEF=V=13&ABDV=13&MRNB=1679509220222&MRB=0; DOMAIN=www.bing.com");

	web_add_cookie("BCP=AD=1&AL=1&SM=1; DOMAIN=www.bing.com");

	web_add_cookie("Imported_MUID=29109458A0796A711E0886BAA1826B28; DOMAIN=www.bing.com");

	web_add_cookie("ANON=A=61451215952A6D180D20C1E9FFFFFFFF&E=1c20&W=1; DOMAIN=www.bing.com");

	web_add_cookie("NAP=V=1.9&E=1bc6&C=p728wwpEA9uMDOGZMUBEDYAm8ZEAWmnmvRpM0yLP0K0FfwyIFoLN0w&W=1; DOMAIN=www.bing.com");

	web_add_cookie("_clck=lcuzc2|1|fak|0; DOMAIN=www.bing.com");

	web_add_cookie("_EDGE_S=SID=1338448CA23A61B725905650A3E36001&mkt=pt-br&ui=pt-br; DOMAIN=www.bing.com");

	web_add_cookie("CortanaAppUID=8B2EAE362CEE6B83D7742FA70EA7E902; DOMAIN=www.bing.com");

	web_add_cookie("SUID=A; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=DOB=20230322&T=1683048838000; DOMAIN=www.bing.com");

	web_add_cookie("_SS=SID=1338448CA23A61B725905650A3E36001&R=613&RB=613&GB=0&RG=1850&RP=589&PC=U531; DOMAIN=www.bing.com");

	web_add_cookie("_U=1rUwSWkphFnCRCFVkIsnUvzl30knZy0fxG2PMVA1opgg5VWjp-yiWmubsp4KvMRVqZE_8lScQmynI2jFkmKlKZD8OTfZlb8_sjOQ-rquahYUgjgImr8Eqo9gZY_GE9T7b6t8xxlaJZctSpK50F3eSLp-hDqoGySeO3gXRCNM2rpjhWtbmB14FtETKZb1ywR6soDsHYSFVUXWpFPM0RGyKF20SRFw-5Vn_mFjKhEbwmTM; DOMAIN=www.bing.com");

	web_add_cookie("ipv6=hit=1683295474630&t=6; DOMAIN=www.bing.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANG=pt-BR&DM=0&PV=15.0.0&BRW=HTP&BRH=S&CW=977&CH=531&SCW=1164&SCH=2589&DPR=1.0&UTC=-180&EXLTT=3&HV=1683291871&PRVCW=977&PRVCH=531; DOMAIN=www.bing.com");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"112.0.1722.68");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.23451");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Search-RPSToken", 
		"t=EwDgAgALBAAUWkziSC7RbDJKS1VkhugDegv7L0eAAEVHopR62bumrzaKgIG17VV4OAfpuv8dFm/iArjmsBCStHKrtYTFvqRrS52vLOa1izAwIvqGJM1fnbkFRWTcKweFb79hhOISqEH30D0BCWe4UoobeU6dNGc5v65SgEUJ7D0QcVH9vrkAuIG+hC16iHbgWoOhAU8pY70il4MzrjltA2YAAAgmmDH/Jz8fvDACsorKdfpulyFoqduprrEHg2YVWIV/+cY0AcfKD0JkL9cftHjXle5g5Cw7CykxSrYonPfBFxiCXkdJhkThxUfGkauQ+MnyAqt6gQhlYD//CPLmLzzMLpHRnp/Lh2OPzOdfFy6w5nb5sdLGoBTG4aIxFSIAz6SvCGBGs9mVDMClsB07jstgUf5DW2LF2PJSYF5w+A7cL2dDg/oMaM8pEOjnwNxo4FT/pn7/"
		"abj151KD16w1mOtNAxst5bPvSMOmxtPdxL0XQbkMDjPhkBhvtNXwjJBt40lW3tAwNBDqJn552yqV94DPqWAa+1wioW+vlRrS7nWn1rEa0+w758YoY5UQvmJc3M+ztTr20eG9AD1rB5bi1lh3Bhl0hq+oQqN6a0dTWqxkfK5ZKDHRUsT1n+UNn+Jj6amaK1iFsMeTEJKvw3Wc52OGNNCcsgLaNE7yB5VOYuwU8Y9KxoMMGbb8WnZOJBVOQI/Hdu/6H63hSApTIXJAtXgn7sILT6TDOetWGQ8etWKQM6s7ahlzhaUjH7WMrFkgREzEgSuXYsdgKuVqVx9eN7juNZo23SV84sioO0FP+124xkIpDyJucPlW3I7b22S9wTqzeCk1+EJairIcBjgEMweJMjzbV9HhL2IazfgXnuDBpDMYASmgOK4hZ3DYSThr6cT2Iwb2l2f4ctK+xU5pb+jFWn+"
		"fPsRh4nknZBIEo47VCZtNCpNnmB8zHUgZ2jz7/crd9pUXVp46F4JXSRtdAg==&p=");

	web_url("signin", 
		"URL=https://www.bing.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI2NTkwNDA0MjQzNjAwMzYxNzk4IiwiNSI6IlwiWHBYVWIyVUJKMVZOU3FHTmgrY2prQllHY1NCK2M5MHhycmVlaE1LUGZiND1cIiIsIjYiOiJzdGFibGUiLCI3IjoiMjk2MzUyNzQzNDI1IiwiOSI6ImRlc2t0b3AifQ==");

	web_custom_request("rewardsUserInfo", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"anid\":\"61451215952A6D180D20C1E9FFFFFFFF\"}", 
		LAST);

	web_add_header("MS-CV", 
		"TD0WYxSvBd05Zw7uin++45");

	web_add_header("X-Goog-Update-AppId", 
		"globgafddkdlnalejlkcpaefakkhkdoa");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromiumcrx-112.0.1722.68");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromiumcrx&prodchannel=&prodversion=112.0.1722.68&lang=pt-BR&acceptformat=crx3&x=id%3Dglobgafddkdlnalejlkcpaefakkhkdoa%26v%3D0.0.0.0%26installedby%3Dinternal%26uc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ipv6=hit=1683295472810&t=6; DOMAIN=edgeservices.bing.com");

	web_add_cookie("USRLOC=HS=1; DOMAIN=edgeservices.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=edgeservices.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=AB495E0BBDAA45F2A4F270C080206A33&dmnchg=1; DOMAIN=edgeservices.bing.com");

	web_add_cookie("MUID=35B64BF2C38D603B1306592EC2546189; DOMAIN=edgeservices.bing.com");

	web_add_cookie("WLS=C=19c5ad7be4b0a90a&N=Bruno; DOMAIN=edgeservices.bing.com");

	web_add_cookie("MUIDB=35B64BF2C38D603B1306592EC2546189; DOMAIN=edgeservices.bing.com");

	web_add_cookie("EDGSRVC=edgeservices=displaytheme=lightschemeovr|language=PT-BR; DOMAIN=edgeservices.bing.com");

	web_add_cookie("EDGSRVCPERSIST=; DOMAIN=edgeservices.bing.com");

	web_add_cookie("SRCHS=PC=U531; DOMAIN=edgeservices.bing.com");

	web_add_cookie("ABDEF=V=13&ABDV=13&MRNB=1679509220222&MRB=0; DOMAIN=edgeservices.bing.com");

	web_add_cookie("BCP=AD=1&AL=1&SM=1; DOMAIN=edgeservices.bing.com");

	web_add_cookie("Imported_MUID=29109458A0796A711E0886BAA1826B28; DOMAIN=edgeservices.bing.com");

	web_add_cookie("NAP=V=1.9&E=1bc6&C=p728wwpEA9uMDOGZMUBEDYAm8ZEAWmnmvRpM0yLP0K0FfwyIFoLN0w&W=1; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_clck=lcuzc2|1|fak|0; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_EDGE_S=SID=1338448CA23A61B725905650A3E36001&mkt=pt-br&ui=pt-br; DOMAIN=edgeservices.bing.com");

	web_add_cookie("CortanaAppUID=8B2EAE362CEE6B83D7742FA70EA7E902; DOMAIN=edgeservices.bing.com");

	web_add_cookie("SUID=A; DOMAIN=edgeservices.bing.com");

	web_add_cookie("SRCHUSR=DOB=20230322&T=1683048838000; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_SS=SID=1338448CA23A61B725905650A3E36001&R=613&RB=613&GB=0&RG=1850&RP=589&PC=U531; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_RwBf=ilt=0&ihpd=0&ispd=0&rc=613&rb=613&gb=0&rg=1850&pc=589&mtu=0&rbb=0&g=0&cid=&clo=0&v=1&l=2023-05-05T07:00:00.0000000Z&lft=0001-01-01T00:00:00.0000000&aof=0&o=0&p=None&c=MA13C5&t=519&s=2019-06-13T17:51:36.6183265+00:00&ts=2023-05-05T13:04:30.6082873+00:00&rwred=0&wls=2&lka=0&lkt=0&TH=&mta=0&e=ogqtKUa6YdUCj11xzw_6jMgjC5XYpQfNnQ-pufRsAcFyhnVW1Y1PAyJRX584J1zVwWnJpE_qO62v_i30msSnItu6-1m_HnJbYcn7rex6M5o&A=61451215952A6D180D20C1E9FFFFFFFF; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_U=1rUwSWkphFnCRCFVkIsnUvzl30knZy0fxG2PMVA1opgg5VWjp-yiWmubsp4KvMRVqZE_8lScQmynI2jFkmKlKZD8OTfZlb8_sjOQ-rquahYUgjgImr8Eqo9gZY_GE9T7b6t8xxlaJZctSpK50F3eSLp-hDqoGySeO3gXRCNM2rpjhWtbmB14FtETKZb1ywR6soDsHYSFVUXWpFPM0RGyKF20SRFw-5Vn_mFjKhEbwmTM; DOMAIN=edgeservices.bing.com");

	web_add_cookie("EDGSRVCSCEN=shell=undersidev2=1|clientscopes=noheader-coauthor-chat-docvisibility-visibilitypm-channelstable; DOMAIN=edgeservices.bing.com");

	web_add_cookie("ipv6=hit=1683295474630&t=6; DOMAIN=edgeservices.bing.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Sec-MS-GEC", 
		"28C6B59C940AA6736A751C9EEB17294B9F917946B904C92932EE073EB9F0A027");

	web_add_header("Sec-MS-GEC-Version", 
		"1-112.0.1722.68");

	web_add_header("Sec-Required-CSP", 
		"frame-src https://www.bing.com/search https://edgeservices.bing.com/ https://www.bing.com/shop/productpage https://www.bing.com/images/create https://login.live.com/login.srf; base-uri 'self'; require-trusted-types-for 'script'; trusted-types default;");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI2NTkwNDA0MjQzNjAwMzYxNzk4IiwiNSI6IlwiWHBYVWIyVUJKMVZOU3FHTmgrY2prQllHY1NCK2M5MHhycmVlaE1LUGZiND1cIiIsIjYiOiJzdGFibGUiLCI3IjoiMjk2MzUyNzQzNDI1IiwiOSI6ImRlc2t0b3AifQ==");

	web_add_header("X-Edge-Shopping-Flag", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?1");

	web_add_header("sec-ch-ua-platform", 
		"\"Android\"");

	web_url("shell", 
		"URL=https://edgeservices.bing.com/edgesvc/shell?&lightschemeovr=1&FORM=SHORUN&udscs=1&udsnav=1&setlang=pt-BR&clientscopes=noheader,coauthor,chat,docvisibility,visibilitypm,channelstable,&udsframed=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"YXLhOdkHv74vpF+nu42twD");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Update-Interactivity", 
		"bg");

	web_url("crx_2", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=112.0.1722.68&lang=pt-BR&acceptformat=crx3&x=id%3Dadmkpobhocmdideidcndkfaeffadipkc%26v%3D2.0.1%26installedby%3Dinternal%26uc&x=id%3Dddobgngkifgapahlheghhckckkcgpikf%26v%3D2.3.0%26installedby%3Dinternal%26uc&x=id%3Ddigoaejcopelkbkcbiemimccohaooggd%26v%3D6.3%26installedby%3Dinternal%26uc&x="
		"id%3Ddknkgjgkdpkmddgdjlgdhfojlaehikmk%26v%3D23.4.2%26installedby%3Dexternal%26uc&x=id%3Ddpidllmdbfmclpenbdfjkbbipkbbadbg%26v%3D3.2.4%26installedby%3Dinternal%26uc&x=id%3Dejbalbakoplchlghecdalmeeeajnimhm%26v%3D10.28.3%26installedby%3Dinternal%26uc&x=id%3Dfcbmiimfkmkkkffjlopcpdlgclncnknm%26v%3D1.11.25%26installedby%3Dinternal%26uc&x=id%3Dfclbdkbhjlgkbpfldjodgjncejkkjcme%26v%3D8.10.0%26installedby%3Dinternal%26uc&x=id%3Difoakfbpdcdoeenechcleahebpibofpc%26v%3D4.9.63%26installedby%3Dinternal%26uc&x="
		"id%3Dkpldbdfpngbdadafgaccakmeaoeligcl%26v%3D10%26installedby%3Dinternal%26uc&x=id%3Dndcileolkflehcjpmjnfbnaibdcgglog%26v%3D5.6.0%26installedby%3Dinternal%26uc&x=id%3Dnpjkkakdacjaihjaoeliacmecofghagh%26v%3D16.4.3.1%26installedby%3Dinternal%26uc&x=id%3Doholpbloipjbbhlhohaebmieiiieioal%26v%3D3.4.7%26installedby%3Dinternal%26uc&x=id%3Dbnplfnhcidhhdapmblniehfaaompjlck%26v%3D1.3%26installedby%3Dinternal%26uc&x=id%3Djcihpcjnflelimhjjggdhhjpencddnbp%26v%3D2.0.1%26installedby%3Dinternal%26uc&x="
		"id%3Dmnbndgmknlpdjdnjfmfcdjoegcckoikn%26v%3D6.10.62%26installedby%3Dinternal%26uc&x=id%3Dnlbmdekgjkajiobkcbpolefohlelfhfe%26v%3D0.7%26installedby%3Dinternal%26uc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_header("Sec-MS-GEC", 
		"28C6B59C940AA6736A751C9EEB17294B9F917946B904C92932EE073EB9F0A027");

	web_add_header("Sec-MS-GEC-Version", 
		"1-112.0.1722.68");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI2NTkwNDA0MjQzNjAwMzYxNzk4IiwiNSI6IlwiWHBYVWIyVUJKMVZOU3FHTmgrY2prQllHY1NCK2M5MHhycmVlaE1LUGZiND1cIiIsIjYiOiJzdGFibGUiLCI3IjoiMjk2MzUyNzQzNDI1IiwiOSI6ImRlc2t0b3AifQ==");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("l", 
		"URL=https://edgeservices.bing.com/fd/ls/l?IG=977589CA5892446ABE462DA9F5817B5C&Type=Event.CPT&DATA={%22pp%22:{%22S%22:%22L%22,%22FC%22:50,%22BC%22:50,%22SE%22:-1,%22TC%22:-1,%22H%22:110,%22BP%22:110,%22CT%22:111,%22IL%22:0},%22ad%22:[-1,-1,0,0,0,0,0],%22net%22:%22undefined%22}&P=UNSP&DA=BNZE01", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://edgeservices.bing.com/edgesvc/shell?&lightschemeovr=1&FORM=SHORUN&udscs=1&udsnav=1&setlang=pt-BR&clientscopes=noheader,coauthor,chat,docvisibility,visibilitypm,channelstable,&udsframed=1", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://darkreader.org/blog/posts.json", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"chrome-extension://ejbalbakoplchlghecdalmeeeajnimhm");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("b6bf7d3508c941499b10025c0776eaf8", 
		"URL=https://mainnet.infura.io/v3/b6bf7d3508c941499b10025c0776eaf8", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"jsonrpc\":\"2.0\",\"method\":\"eth_blockNumber\",\"params\":[],\"id\":1}", 
		LAST);

	web_add_cookie("pglt-edgeChromium-ntp=171; DOMAIN=ntp.msn.com");

	web_add_cookie("sptmarket=pt-BR||br|pt-br|pt-br|pt||RefA=9B9A0A15429247DCB496AF3FE203033D.RefC=2023-03-22T18:20:15Z; DOMAIN=ntp.msn.com");

	web_add_cookie("USRLOC=; DOMAIN=ntp.msn.com");

	web_add_cookie("MUIDB=15B98DB5E1846EFA39E59F69E0FD6F34; DOMAIN=ntp.msn.com");

	web_add_cookie("_EDGE_S=F=1&SID=150DF05A8F746FFE0157E2868ED86E18; DOMAIN=ntp.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=ntp.msn.com");

	web_add_cookie("APP_ANON=A=61451215952A6D180D20C1E9FFFFFFFF; DOMAIN=ntp.msn.com");

	web_add_cookie("aace=%7b%22child%22%3a0%7d; DOMAIN=ntp.msn.com");

	web_add_cookie("els=%7b%22account_type%22%3a%22MSA%22%7d; DOMAIN=ntp.msn.com");

	web_add_cookie("MicrosoftApplicationsTelemetryDeviceId=bb4454df-2da6-4b56-94e9-a58421ed6ee4; DOMAIN=ntp.msn.com");

	web_add_cookie("_SS=SID=00; DOMAIN=ntp.msn.com");

	web_add_cookie("NAP=V=1.9&E=1bc6&C=p728wwpEA9uMDOGZMUBEDYAm8ZEAWmnmvRpM0yLP0K0FfwyIFoLN0w&W=1; DOMAIN=ntp.msn.com");

	web_add_cookie("ANON=A=61451215952A6D180D20C1E9FFFFFFFF&E=1c20&W=1; DOMAIN=ntp.msn.com");

	web_add_cookie("ace=%7b%22child%22%3a0%7d; DOMAIN=ntp.msn.com");

	web_add_cookie("MSNRPSSecAuth="
		"FACKARSuWEXpa7%2fWMRDvq9MNAN2YSHACjgNmAAAEgAAACIOWqFeRuPt9SAHbz%2bekdjopRvbZzdFVeGUaWRmXpyv4nUwFe%2bijrwpQvegx3ITZyjr5VI4zyv03MYeLqBKO8w2cKBHdNMIxZogpzdnikrWVaUPObqwmsIqVHr2RKUFoGH8rverX0%2b9YUM0yFK9ZonwRg%2bP9ww6TEiAzzUbH77oZ3NmfKkRZbe3LfrBQ%2fHYnzmJe9HTtdnUk2p%2breXi0POXBTjw%2fRvjLYBml55mVQ9bey%2boHznwD%2fnTdemoj5dMLmCLqpb2gxeLkLy8zKOACY%2fB2Q8yxXwSXgSZei9K%2f0aFhMS2W5kn0oyFnU8hez3xG57owFYs%2fpOIrEJXwj2iB%2bHHwCthiP7Ezq%2f6YzQ2m7Ogpruq%2fYagMjGnRbz631FdYNBEGyi2FLfL6M8sMyZRw1CiGQIx%2fh0qEZEVTq6AH"
		"MLeHrI7rXoRhVRU6xG1mXGUJYM%2fsFAAC57U5eIe6KaDGjvHQ87nPxxXK0g%3d%3d; DOMAIN=ntp.msn.com");

	web_add_cookie("MUID=35B64BF2C38D603B1306592EC2546189; DOMAIN=ntp.msn.com");

	web_add_cookie("OptanonAlertBoxClosed=2023-04-20T11:56:25.538Z; DOMAIN=ntp.msn.com");

	web_add_cookie("eupubconsent-v2="
		"CPqi5QOPqi5QOAcABBENC0CsAP_AAEPAACiQJNNf_X__b2_r-_5_f_t0eY1P9_7__-0zjhedl-8N3d_X_L8X52M7vF36tq4KuR4ku3LBAUdlHPHcTUmw6IkVqyPsbk2cr7NKJ7PEmnMbOydYGH9_n1_z-ZKY7___f_7z_v-v_________-3f3__5_9_-_wAAB8idzfn9_____9_P___9v-_9__________3_79_7_H8EmwCTDVuIAuzLHBk2jCKBECMKwkOoFABRQDC0QGEDq4KdlcBPrCBAAgFAE4EQIMAUYMAgAAEgCQiICQA8EAgAIgEAAIAFQiEADGwCCwAsDAIABQDQsUYoAhAkIMiAiKUwICpEgoJ7KhBKD_Q0whDrKACgwAAACADWQMVgRCQsHIcASAl4skDzFG-QAjBCgFEqFaik9NAIDQIQArABcAEMAMgAZYA2QB2AD8AIAAQUAjABTwCrwFoAWkA1gBvADqgHyAQ6AioBIg"
		"CdgFIgLkAYSAxgBk4DOQGeAM-AfgBH8CRQYAUAOYA6gCQgEigMjAboA4kB2YD3QIfCABgAJABzAG8ASEAkUBugDiQHZgPdAfYBD4COgiA0AFYAQwAyABlgDZAHYAPwAgABGACngFXANYAdUA-QCHQEiAJ2AUiAuQBhIDJwGcgM-AfgBH8CRQqAwABQAIYATAAuACOAGWAOwAjgBV4C0ALSAbwBIIC2AFyALzAZEAzkBngDPgG5APwAheBH8CRQoAaANoAcwA8ACCgHVAR6AkUBrwDbwHEgPsAgeBBsZAVACGAEwARwAywB2AEcAKuAVsA3gCTgFogLYAXmAyIBnIDPAGfAPwAheBH8CRQwAYANoAcwA8ACxAHVAR6AkUBeQDbwHEgPsAg2.f_gACHgAAAAA; DOMAIN=ntp.msn.com");

	web_add_cookie("OptanonConsent=isGpcEnabled=0&datestamp=Thu+Apr+20+2023+08%3A56%3A25+GMT-0300+(GMT-03%3A00)&version=6.25.0&isIABGlobal=false&hosts=&consentId=d2d33d65-90dd-4adc-be75-51ee2c73ae48&interactionCount=2&landingPath=NotLandingPage&groups=C0001%3A1%2CC0002%3A1%2CC0003%3A1%2CC0004%3A1%2CSTACK42%3A1&AwaitingReconsent=false; DOMAIN=ntp.msn.com");

	web_add_cookie("lt=t=EwBgA6AEAAAURnNPDOP4v1G28DRF5A6y6RDoGigAAVC0DZ0RsphkNUSE8c0Hkg3xoeXQLtS2Tp+Kc0OtpGllCbY7osuH+RmIvJ1Yx3IrP4G1Yk0Fly6Us8SsqPjEE+oyz5KubiZfDwzejgEavmJG8nBM498tIxvQgqSNIUL5ZWOVGhGWFIAS2IPchNNEPoqhWFAgdzD5SyLO4cpTSI6xVs4gVvt/ulsrX83G1SaMn8KiSsyo3J+u/31BHuJcKwNuKeOvuqT+/5YSnvNw+oN9Dy9bmJkjLcVuUkGqhqRzw35uy65JqUImAp/Y++U1GJ1MA8LmDEGHeeM9XWBtyAlRXiKW7zrizfjrOZIav6NDXT5Y5LVfK2k5ZJP1WIFwQ3cDZgAACIujJp1adAqwMALdyOJ58d39K7kQJHmlfjiGV9DPBi/hYxm3K58/2/JCml8Uys1yRd+uH/"
		"frimPqUnOMKmOpZs7d1oIqqef0sY3NNjOy2eSIQluXiNXrtZBQuITFTThtICYsU0UG/wLUsCBiJvYWZdB8IZ924B2s/zO5kyRONWGFm0NLJHteEYGwmrsRsxmVjB6/bFFglKpmpaK0K5Vr/0T7lv3dfQVXWxD//9rUNebJoB8CieBHrzJk76c16fkchcHVfXiemHEZvTDstpU5SIQV+3mKCzQlY+dR7U84GF1A0q+0ZCAwkbC1d7J1s8p6fxjZEd4pPkPVteoAzJ3i0v2Kyh4MYYYvYCPqpLuueRGZPnoMxY9jYguZDiXTGqm9u3E+0qvGgYNRYzDZIJEkwnSqMN19TqOpNK++3DEhp083LDbkLIJKmUhoNB3PTI9Djdr4xKBc0TRTOTy0pLJuxqaPP9SsWhauX2K8ivUWZVN6zra1ooyA6NjETZLptSF7qB+ukctVpTaJz7ibCQOut/Yp8QiTLOkn5oHyz1oCrf4QoOnXoZJIOM/"
		"Ntd6JgEhUFyzRyCQVpknu0lRqMagIsrktDLoBYf/b+97fttTW+7Sih7qxq2GwaaKnEMzPCAs6EMRYALfjjQiT0+C9ZI6Hqy5mDDd9iRxFFeJdiC/OCCjAb6+UOtTTdp3E5WNeccYZOo47m1VnPGBl5urbTtGc95zNK4Oaee+ogNoJX0tzYzAEFEMLPmLQN8fWF10C&p=; DOMAIN=ntp.msn.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Service-Worker-Navigation-Preload", 
		"true");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI2NTkwNDA0MjQzNjAwMzYxNzk4IiwiNSI6IlwiWHBYVWIyVUJKMVZOU3FHTmgrY2prQllHY1NCK2M5MHhycmVlaE1LUGZiND1cIiIsIjYiOiJzdGFibGUiLCI3IjoiMjk2MzUyNzQzNDI1IiwiOSI6ImRlc2t0b3AifQ==");

	web_add_header("X-Edge-NTP", 
		"{\"exp\":[\"msQuickLinksDefaultOneRow\",\"msShoppingWebAssistOnNtp\",\"msShoppingHistogramsOnNtp\",\"msKidsModeThemePickerEnabled\",\"msEnableWinHPNewTabBackButtonFocusAndClose\",\"msCustomMaxQuickLinks\",\"msMaxQuickLinksAt20\",\"msAllowThemeInstallationFromChromeStore\"]}");

	web_add_header("device-memory", 
		"8");

	web_add_header("downlink", 
		"1.7");

	web_add_header("ect", 
		"4g");

	web_add_header("rtt", 
		"200");

	web_add_header("sec-ch-prefers-color-scheme", 
		"light");

	web_add_header("sec-ch-ua-arch", 
		"\"x86\"");

	web_add_header("sec-ch-ua-bitness", 
		"\"64\"");

	web_add_header("sec-ch-ua-full-version", 
		"\"112.0.1722.68\"");

	web_add_header("sec-ch-ua-full-version-list", 
		"\"Chromium\";v=\"112.0.5615.138\", \"Microsoft Edge\";v=\"112.0.1722.68\", \"Not:A-Brand\";v=\"99.0.0.0\"");

	web_add_header("sec-ch-ua-model", 
		"\"\"");

	web_add_header("sec-ch-ua-platform-version", 
		"\"15.0.0\"");

	web_add_header("sec-ch-viewport-height", 
		"615");

	web_add_header("sec-ch-viewport-width", 
		"1309");

	web_add_header("sec-edge-ntp", 
		"{\"exp\":[\"msQuickLinksDefaultOneRow\",\"msShoppingWebAssistOnNtp\",\"msShoppingHistogramsOnNtp\",\"msKidsModeThemePickerEnabled\",\"msEnableWinHPNewTabBackButtonFocusAndClose\",\"msCustomMaxQuickLinks\",\"msMaxQuickLinksAt20\",\"msAllowThemeInstallationFromChromeStore\"]}");

	web_url("ntp", 
		"URL=https://ntp.msn.com/edge/ntp?locale=pt-BR&title=Nova%20guia&dsp=1&sp=Bing&prerender=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_header("Infura-Source", 
		"metamask/internal");

	web_add_auto_header("Origin", 
		"chrome-extension://ejbalbakoplchlghecdalmeeeajnimhm");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("b6bf7d3508c941499b10025c0776eaf8_2", 
		"URL=https://mainnet.infura.io/v3/b6bf7d3508c941499b10025c0776eaf8", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":7779231013157085,\"jsonrpc\":\"2.0\",\"method\":\"eth_blockNumber\",\"params\":[]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("b6bf7d3508c941499b10025c0776eaf8_3", 
		"URL=https://mainnet.infura.io/v3/b6bf7d3508c941499b10025c0776eaf8", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"jsonrpc\":\"2.0\",\"method\":\"eth_blockNumber\",\"params\":[],\"id\":1}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://edgeservices.bing.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-MS-GEC", 
		"28C6B59C940AA6736A751C9EEB17294B9F917946B904C92932EE073EB9F0A027");

	web_add_header("Sec-MS-GEC-Version", 
		"1-112.0.1722.68");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI2NTkwNDA0MjQzNjAwMzYxNzk4IiwiNSI6IlwiWHBYVWIyVUJKMVZOU3FHTmgrY2prQllHY1NCK2M5MHhycmVlaE1LUGZiND1cIiIsIjYiOiJzdGFibGUiLCI3IjoiMjk2MzUyNzQzNDI1IiwiOSI6ImRlc2t0b3AifQ==");

	web_custom_request("lsp.aspx", 
		"URL=https://edgeservices.bing.com/fd/ls/lsp.aspx?", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://edgeservices.bing.com/edgesvc/shell?&lightschemeovr=1&FORM=SHORUN&udscs=1&udsnav=1&setlang=pt-BR&clientscopes=noheader,coauthor,chat,docvisibility,visibilitypm,channelstable,&udsframed=1", 
		"Snapshot=t26.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=<ClientInstRequest><Events><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><TS>1683295340238</TS><D><![CDATA[{id:6425,P:\"2:6,3:37h,4:3l4,5:3l4,7:3yt,6:3ly,8:3yt,9:44n,10:45k,11:44y,12:48i,13:48i,14:48i,15:48i,16:48i,17:48j,FN:46u,BN:46u\",S:\"nav:0\",v:1.1,T:\"CI.Perf\",FID:\"CI\",Name:\"PerfV2\"}]]></D></E></Events><STS>1683295340238</STS></ClientInstRequest>", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.23451; app=Microsoft Edge; appVer=112.0.1722.68; appChannel=stable");

	web_custom_request("subscriptions", 
		"URL=https://edge.microsoft.com/sync/v2/feeds/me/subscriptions", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"channelExpireTime\":\"Fri, 21 Mar 2025 18:11:10 GMT\",\"channelurl\":\"https://wns2-bl2p.notify.windows.com/w/?token=BQYAAAA7JfcBBWM9WD2FAQQnT9aWGwpS%2fgbSsN%2fgspIUx8pQt4VYXJo7lf%2fctWzVqaYVKK4LDzpRpS72mpy2xLxzNq0RU7AgVLeR0%2b3JH74UZd4DYEkcmVtN7BILaM38aC5HoMK7W7gaaaA%2b9ey4NkKTAlj66cTkvvy1UiTx76fgXwyPmP383G41nw2euyqTWEfHC926%2fqRrMpCzuEU%2b8PygWKaJijw9KO3XZQWyOB5UVGh5B6mf3iR8%2bkZp%2bTRNQjU7%2f7k%3d\",\"deviceId\":\"chr:h9d5Wtg+G8FPF+E+Yg5KNQ==\",\"publisherFilters\":[{\"activityTypes\":"
		"[64,65,66,67,70,71,72,75,77,79,82,103,104,106,108,109],\"application\":\"edge.activity.windows.com\",\"notificationType\":\"notificationOnly\",\"platform\":\"host\"}]}", 
		EXTRARES, 
		"Url=https://easylist-downloads.adblockplus.org/easylistportuguese+easylist.txt?addonName=adblockchrome&addonVersion=5.6.0&application=edg&applicationVersion=112.0.1722.68&platform=chromium&platformVersion=112.0.0.0&lastVersion=202304301602&downloadCount=4%2B&disabled=false&manifestVersion=2&firstVersion=202303", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("daily", 
		"URL=https://d.ghostery.com/active/daily?gr=-1&v=8.10.0&ua=ed&os=win&l=pt_BR&bv=112&id=2023-03-22&sc=0&st=-1&si=0&pi=gbe&hw=0&ir=35&sn=0&nc=0&pb=0&ev=1&ab=0&sm=0&at=0&ss=-1&sl=null&sb=2&rc=1&ps=0&va=3&re=-1&ve=0&th=0&ts=0&us=&uc=", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=image/gif", 
		EXTRARES, 
		"Url=https://easylist-downloads.adblockplus.org/exceptionrules.txt?addonName=adblockchrome&addonVersion=5.6.0&application=edg&applicationVersion=112.0.1722.68&platform=chromium&platformVersion=112.0.0.0&lastVersion=202304301601&downloadCount=4%2B&disabled=false&manifestVersion=2&firstVersion=202303", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-MSEdge-ClientID", 
		"35B64BF2C38D603B1306592EC2546189");

	web_add_header("X-MSEdge-UserID", 
		"61451215952A6D180D20C1E9FFFFFFFF");

	web_url("collections", 
		"URL=https://www.bingapis.com/api/v7/saves/edge/collections?appid=44A72CAAA7B8B99CBEF405BFAD4E9B24370F2853", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://easylist-downloads.adblockplus.org/abp-filters-anti-cv.txt?addonName=adblockchrome&addonVersion=5.6.0&application=edg&applicationVersion=112.0.1722.68&platform=chromium&platformVersion=112.0.0.0&lastVersion=202304301601&downloadCount=4%2B&disabled=false&manifestVersion=2&firstVersion=202303", "Referer=", ENDITEM, 
		"Url=https://metamask.github.io/phishing-warning/v2.1.0/service-worker.js", "Referer=https://metamask.github.io/phishing-warning/v2.1.0/service-worker.js", ENDITEM, 
		LAST);

	web_add_header("X-Client-Data", 
		"CJ33ygE=");

	web_add_header("X-AFS-CV", 
		"h5fW8uvrJ5FxJCGtQJemwu");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.23451; app=Microsoft Edge; appVer=112.0.1722.68; appChannel=stable; appInstallationId=6590404243600361798; region=BR;");

	web_custom_request("command", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=h9d5Wtg%2BG8FPF%2BE%2BYg5KNQ%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x10c\\x18\\x02*\\xB3\\x04\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08\\xA1!\\xE4\\xB5\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9E\\x95+\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002 \\x08\\xC7\\x87\\x03\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00\"\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x01(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002 \\x08\\x9A\\xB7\t\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00\"\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x01(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC9\\x8B)\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xD0\\xAF:\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08l!\\x04\\xEC\\x87\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x060\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:-ProductionEnvironmentDefinition_1662169587667R\\xFE\\x05\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\x9A\\xB7\t\n"
		"!*\\x1F\\x08\\x88\\x81\\x02h\\x00x\\xE7\\xD6\\xD0\\x03\\x90\\x01\\xC6\\xA6\\x02\\x90\\x01\\x9A\\xB7\t\\x90\\x01\\xFC\\xDE$\\x90\\x01\\xD0\\xAF:\n\\x12*\\x10\\x08\\xC6\\xA6\\x02h\\x00x\\xB0\\xD2\\xD0\\x03\\x90\\x01\\x81\\xF5\\x02\n\\x12*\\x10\\x08\\xB1\\xE6\\x02h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\n\\x17*\\x15\\x08\\xCF\\xF3\\x03h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\n"
		"\\x1C*\\x1A\\x08\\xF1\\xF7\\x01h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\n!*\\x1F\\x08\\x9E\\x95+h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\n&*$\\x08\\xCD\\xBE\\x02h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\n+*)"
		"\\x08\\xF7\\xF7\\x02h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\n0*.\\x08\\xC7\\x87\\x03h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\n"
		"5*3\\x08\\x9F\\xEF\\x05h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\n:*8\\x08\\xEB\\x95\th\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+"
		"\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\n\\x17*\\x15\\x08\\x9A\\xB7\th\\x00x\\xB0\\xD2\\xD0\\x03\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xC6\\xA6\\x02\n?*=\\x08\\xEE\\xF7!h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\n"
		"\\x1C*\\x1A\\x08\\xFC\\xDE$h\\x00x\\xB0\\xD2\\xD0\\x03\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\x9A\\xB7\t\nD*B\\x08\\xC9\\x8B)h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\n"
		"I*G\\x08\\xA1\\xDD'h\\x00x\\xFD\\xDE\\xD0\\x03\\x90\\x01\\x88\\x81\\x02\\x98\\x01\\xB1\\xE6\\x02\\x98\\x01\\xCF\\xF3\\x03\\x98\\x01\\xF1\\xF7\\x01\\x98\\x01\\x9E\\x95+\\x98\\x01\\xCD\\xBE\\x02\\x98\\x01\\xF7\\xF7\\x02\\x98\\x01\\xC7\\x87\\x03\\x98\\x01\\x9F\\xEF\\x05\\x98\\x01\\xEB\\x95\t\\x98\\x01\\xEE\\xF7!\\x98\\x01\\xC9\\x8B)\n!*\\x1F\\x08\\xD0\\xAF:h\\x00x\\xB0\\xD2\\xD0\\x03\\x90\\x01\\x81\\xF5\\x02\\x98\\x01\\xC6\\xA6\\x02\\x98\\x01\\x9A\\xB7\t\\x98\\x01\\xFC\\xDE$\n\r"
		"*\\x0B\\x08\\x81\\xF5\\x02h\\x00x\\xEB\\xCA\\xD0\\x03\n\\x04\\x18\\xEE\\xF7!\\x10\\x01\\x18\\x00 \\x00Z\\x00b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:h9d5Wtg+G8FPF+E+Yg5KNQ==", 
		EXTRARES, 
		"Url=https://ntp.msn.com/edge/ntp/service-worker.js?riverAgeMinutes=180&enableNetworkFirst=true&navAgeMinutes=2880&enableNavPreload=true", "Referer=https://ntp.msn.com/edge/ntp/service-worker.js?riverAgeMinutes=180&enableNetworkFirst=true&navAgeMinutes=2880&enableNavPreload=true", ENDITEM, 
		LAST);

	lr_start_transaction("01_ENTER_THE_STORE");

	web_add_header("Origin", 
		"https://edgeservices.bing.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-MS-GEC", 
		"28C6B59C940AA6736A751C9EEB17294B9F917946B904C92932EE073EB9F0A027");

	web_add_header("Sec-MS-GEC-Version", 
		"1-112.0.1722.68");

	web_add_auto_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI2NTkwNDA0MjQzNjAwMzYxNzk4IiwiNSI6IlwiWHBYVWIyVUJKMVZOU3FHTmgrY2prQllHY1NCK2M5MHhycmVlaE1LUGZiND1cIiIsIjYiOiJzdGFibGUiLCI3IjoiMjk2MzUyNzQzNDI1IiwiOSI6ImRlc2t0b3AifQ==");

	web_add_header("X-MSEdge-ExternalExp", 
		"null");

	web_add_header("X-MSEdge-ExternalExpType", 
		"JointCoord");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("xls.aspx", 
		"URL=https://edgeservices.bing.com/web/xls.aspx", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://edgeservices.bing.com/edgesvc/shell?&lightschemeovr=1&FORM=SHORUN&udscs=1&udsnav=1&setlang=pt-BR&clientscopes=noheader,coauthor,chat,docvisibility,visibilitypm,channelstable,&udsframed=1", 
		"Snapshot=t31.inf", 
		"EncType=text/xml", 
		"Body=<ClientInstRequest><CID>35B64BF2C38D603B1306592EC2546189</CID><Events><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"T\":\"CI.Init\",\"TS\":1683295339871,\"RTS\":107,\"SEQ\":0,\"Name\":\"Base\",\"FID\":\"CI\",\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"UTS\":1683295360141}]]></D><TS>1683295339764</TS></E><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"T\":\"CI.Info\",\"TS\":1683295339871,\"RTS\":107,\"SEQ\""
		":1,\"Name\":\"0\",\"FID\":\"DM\",\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"UTS\":1683295360141}]]></D><TS>1683295339764</TS></E><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"provider\":\"Discover.Shell.PageContext\",\"T\":\"CI.Discover.PageContext.Provider.Register\",\"TS\":1683295360000,\"RTS\":20236,\"SEQ\":2,\"UTS\":1683295360141}]]></D><TS>1683295360000</TS></E><E><T"
		">Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"T\":\"CI.Discover.Shell.UserAuthStart\",\"TS\":1683295360001,\"RTS\":20237,\"SEQ\":3,\"UTS\":1683295360141}]]></D><TS>1683295360001</TS></E><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"T\":\"CI.Discover.Shell.UserAuthEnd\",\"TS\":1683295360124,\"RTS\":20360,\"SEQ\":4,\""
		"UTS\":1683295360141}]]></D><TS>1683295360124</TS></E><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"Name\":\"Feedback\",\"Text\":\"sb_feedback\",\"T\":\"CI.FeedbackInit\",\"TS\":1683295360139,\"RTS\":20375,\"SEQ\":5,\"UTS\":1683295360141}]]></D><TS>1683295360139</TS></E><E><T>Event.CIQueueError</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/"
		"shell\",\"errorType\":\"SendTimedOut\",\"failCount\":1,\"TS\":1683295360141,\"RTS\":20377,\"SEQ\":6,\"UTS\":1683295360141}]]></D><TS>1683295360141</TS></E></Events></ClientInstRequest>", 
		LAST);

	web_add_cookie("USRLOC=; DOMAIN=api.msn.com");

	web_add_cookie("_EDGE_S=F=1&SID=150DF05A8F746FFE0157E2868ED86E18; DOMAIN=api.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=api.msn.com");

	web_add_cookie("APP_ANON=A=61451215952A6D180D20C1E9FFFFFFFF; DOMAIN=api.msn.com");

	web_add_cookie("aace=%7b%22child%22%3a0%7d; DOMAIN=api.msn.com");

	web_add_cookie("els=%7b%22account_type%22%3a%22MSA%22%7d; DOMAIN=api.msn.com");

	web_add_cookie("_SS=SID=00; DOMAIN=api.msn.com");

	web_add_cookie("NAP=V=1.9&E=1bc6&C=p728wwpEA9uMDOGZMUBEDYAm8ZEAWmnmvRpM0yLP0K0FfwyIFoLN0w&W=1; DOMAIN=api.msn.com");

	web_add_cookie("ANON=A=61451215952A6D180D20C1E9FFFFFFFF&E=1c20&W=1; DOMAIN=api.msn.com");

	web_add_cookie("ace=%7b%22child%22%3a0%7d; DOMAIN=api.msn.com");

	web_add_cookie("MSNRPSSecAuth="
		"FACKARSuWEXpa7%2fWMRDvq9MNAN2YSHACjgNmAAAEgAAACIOWqFeRuPt9SAHbz%2bekdjopRvbZzdFVeGUaWRmXpyv4nUwFe%2bijrwpQvegx3ITZyjr5VI4zyv03MYeLqBKO8w2cKBHdNMIxZogpzdnikrWVaUPObqwmsIqVHr2RKUFoGH8rverX0%2b9YUM0yFK9ZonwRg%2bP9ww6TEiAzzUbH77oZ3NmfKkRZbe3LfrBQ%2fHYnzmJe9HTtdnUk2p%2breXi0POXBTjw%2fRvjLYBml55mVQ9bey%2boHznwD%2fnTdemoj5dMLmCLqpb2gxeLkLy8zKOACY%2fB2Q8yxXwSXgSZei9K%2f0aFhMS2W5kn0oyFnU8hez3xG57owFYs%2fpOIrEJXwj2iB%2bHHwCthiP7Ezq%2f6YzQ2m7Ogpruq%2fYagMjGnRbz631FdYNBEGyi2FLfL6M8sMyZRw1CiGQIx%2fh0qEZEVTq6AH"
		"MLeHrI7rXoRhVRU6xG1mXGUJYM%2fsFAAC57U5eIe6KaDGjvHQ87nPxxXK0g%3d%3d; DOMAIN=api.msn.com");

	web_add_cookie("MUID=35B64BF2C38D603B1306592EC2546189; DOMAIN=api.msn.com");

	web_add_cookie("OptanonAlertBoxClosed=2023-04-20T11:56:25.538Z; DOMAIN=api.msn.com");

	web_add_cookie("eupubconsent-v2="
		"CPqi5QOPqi5QOAcABBENC0CsAP_AAEPAACiQJNNf_X__b2_r-_5_f_t0eY1P9_7__-0zjhedl-8N3d_X_L8X52M7vF36tq4KuR4ku3LBAUdlHPHcTUmw6IkVqyPsbk2cr7NKJ7PEmnMbOydYGH9_n1_z-ZKY7___f_7z_v-v_________-3f3__5_9_-_wAAB8idzfn9_____9_P___9v-_9__________3_79_7_H8EmwCTDVuIAuzLHBk2jCKBECMKwkOoFABRQDC0QGEDq4KdlcBPrCBAAgFAE4EQIMAUYMAgAAEgCQiICQA8EAgAIgEAAIAFQiEADGwCCwAsDAIABQDQsUYoAhAkIMiAiKUwICpEgoJ7KhBKD_Q0whDrKACgwAAACADWQMVgRCQsHIcASAl4skDzFG-QAjBCgFEqFaik9NAIDQIQArABcAEMAMgAZYA2QB2AD8AIAAQUAjABTwCrwFoAWkA1gBvADqgHyAQ6AioBIg"
		"CdgFIgLkAYSAxgBk4DOQGeAM-AfgBH8CRQYAUAOYA6gCQgEigMjAboA4kB2YD3QIfCABgAJABzAG8ASEAkUBugDiQHZgPdAfYBD4COgiA0AFYAQwAyABlgDZAHYAPwAgABGACngFXANYAdUA-QCHQEiAJ2AUiAuQBhIDJwGcgM-AfgBH8CRQqAwABQAIYATAAuACOAGWAOwAjgBV4C0ALSAbwBIIC2AFyALzAZEAzkBngDPgG5APwAheBH8CRQoAaANoAcwA8ACCgHVAR6AkUBrwDbwHEgPsAgeBBsZAVACGAEwARwAywB2AEcAKuAVsA3gCTgFogLYAXmAyIBnIDPAGfAPwAheBH8CRQwAYANoAcwA8ACxAHVAR6AkUBeQDbwHEgPsAg2.f_gACHgAAAAA; DOMAIN=api.msn.com");

	web_add_cookie("OptanonConsent=isGpcEnabled=0&datestamp=Thu+Apr+20+2023+08%3A56%3A25+GMT-0300+(GMT-03%3A00)&version=6.25.0&isIABGlobal=false&hosts=&consentId=d2d33d65-90dd-4adc-be75-51ee2c73ae48&interactionCount=2&landingPath=NotLandingPage&groups=C0001%3A1%2CC0002%3A1%2CC0003%3A1%2CC0004%3A1%2CSTACK42%3A1&AwaitingReconsent=false; DOMAIN=api.msn.com");

	web_add_cookie("lt=t=EwBgA6AEAAAURnNPDOP4v1G28DRF5A6y6RDoGigAAVC0DZ0RsphkNUSE8c0Hkg3xoeXQLtS2Tp+Kc0OtpGllCbY7osuH+RmIvJ1Yx3IrP4G1Yk0Fly6Us8SsqPjEE+oyz5KubiZfDwzejgEavmJG8nBM498tIxvQgqSNIUL5ZWOVGhGWFIAS2IPchNNEPoqhWFAgdzD5SyLO4cpTSI6xVs4gVvt/ulsrX83G1SaMn8KiSsyo3J+u/31BHuJcKwNuKeOvuqT+/5YSnvNw+oN9Dy9bmJkjLcVuUkGqhqRzw35uy65JqUImAp/Y++U1GJ1MA8LmDEGHeeM9XWBtyAlRXiKW7zrizfjrOZIav6NDXT5Y5LVfK2k5ZJP1WIFwQ3cDZgAACIujJp1adAqwMALdyOJ58d39K7kQJHmlfjiGV9DPBi/hYxm3K58/2/JCml8Uys1yRd+uH/"
		"frimPqUnOMKmOpZs7d1oIqqef0sY3NNjOy2eSIQluXiNXrtZBQuITFTThtICYsU0UG/wLUsCBiJvYWZdB8IZ924B2s/zO5kyRONWGFm0NLJHteEYGwmrsRsxmVjB6/bFFglKpmpaK0K5Vr/0T7lv3dfQVXWxD//9rUNebJoB8CieBHrzJk76c16fkchcHVfXiemHEZvTDstpU5SIQV+3mKCzQlY+dR7U84GF1A0q+0ZCAwkbC1d7J1s8p6fxjZEd4pPkPVteoAzJ3i0v2Kyh4MYYYvYCPqpLuueRGZPnoMxY9jYguZDiXTGqm9u3E+0qvGgYNRYzDZIJEkwnSqMN19TqOpNK++3DEhp083LDbkLIJKmUhoNB3PTI9Djdr4xKBc0TRTOTy0pLJuxqaPP9SsWhauX2K8ivUWZVN6zra1ooyA6NjETZLptSF7qB+ukctVpTaJz7ibCQOut/Yp8QiTLOkn5oHyz1oCrf4QoOnXoZJIOM/"
		"Ntd6JgEhUFyzRyCQVpknu0lRqMagIsrktDLoBYf/b+97fttTW+7Sih7qxq2GwaaKnEMzPCAs6EMRYALfjjQiT0+C9ZI6Hqy5mDDd9iRxFFeJdiC/OCCjAb6+UOtTTdp3E5WNeccYZOo47m1VnPGBl5urbTtGc95zNK4Oaee+ogNoJX0tzYzAEFEMLPmLQN8fWF10C&p=; DOMAIN=api.msn.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Origin", 
		"https://ntp.msn.com");

	web_url("appanon", 
		"URL=https://api.msn.com/auth/cookie/appanon?scn=app_anon&ocid=authconstants-peregrine&apikey=1hYoJsIRvPEnSkk0hlnJF2092mHqiz7xFenIFKa9uc&activityId=C21AC699DEC34D599367F956C327C975", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Client-Data");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-MSEdge-ClientID", 
		"35B64BF2C38D603B1306592EC2546189");

	web_add_header("X-MSEdge-UserID", 
		"61451215952A6D180D20C1E9FFFFFFFF");

	web_custom_request("subscriptions_2", 
		"URL=https://www.bingapis.com/api/v7/saves/edge/subscriptions?appid=44A72CAAA7B8B99CBEF405BFAD4E9B24370F2853", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"ChannelUrl\": \"https://wns2-bl2p.notify.windows.com/w/?token=BQYAAAC%2fBnC3SDPOJAOJzNGVIAPdMQTSwbYojJ7aATLjzK6n9HVD3PRaEXrVBGEynZkqaXK3fPVBglpI8LiAy1CgjxRkyD%2bX0fvk78NFR29RMczU%2fdE7l9STub3t%2fPrGlnklF7943s3mF0jLu8HfK%2bhdzC1pCC%2fLG0xMixonsFssHaxx8V58tMHCWguVUogS3TqyWuoYc1GzbovwClQXU6HniMuVAaetlJM1awkF%2b%2bMT7TnCMkh27K4S6cqK5nXLne1Oda41t90VlVuH4PFUmkotoGtaJzViaej%2bcoGBOJ26OToYRx0x852DUy4WpYbhPax08CI%3d\", \"ExpiryTimeUTC\": 1683468141}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://edgeservices.bing.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-MS-GEC", 
		"28C6B59C940AA6736A751C9EEB17294B9F917946B904C92932EE073EB9F0A027");

	web_add_header("Sec-MS-GEC-Version", 
		"1-112.0.1722.68");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI2NTkwNDA0MjQzNjAwMzYxNzk4IiwiNSI6IlwiWHBYVWIyVUJKMVZOU3FHTmgrY2prQllHY1NCK2M5MHhycmVlaE1LUGZiND1cIiIsIjYiOiJzdGFibGUiLCI3IjoiMjk2MzUyNzQzNDI1IiwiOSI6ImRlc2t0b3AifQ==");

	web_add_header("X-MSEdge-ExternalExp", 
		"null");

	web_add_header("X-MSEdge-ExternalExpType", 
		"JointCoord");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("xls.aspx_2", 
		"URL=https://edgeservices.bing.com/web/xls.aspx", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"Referer=https://edgeservices.bing.com/edgesvc/shell?&lightschemeovr=1&FORM=SHORUN&udscs=1&udsnav=1&setlang=pt-BR&clientscopes=noheader,coauthor,chat,docvisibility,visibilitypm,channelstable,&udsframed=1", 
		"Snapshot=t34.inf", 
		"EncType=text/xml", 
		"Body=<ClientInstRequest><CID>35B64BF2C38D603B1306592EC2546189</CID><Events><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"T\":\"CI.Init\",\"TS\":1683295339871,\"RTS\":107,\"SEQ\":0,\"Name\":\"Base\",\"FID\":\"CI\",\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"UTS\":1683295366700}]]></D><TS>1683295339764</TS></E><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"T\":\"CI.Info\",\"TS\":1683295339871,\"RTS\":107,\"SEQ\""
		":1,\"Name\":\"0\",\"FID\":\"DM\",\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"UTS\":1683295366700}]]></D><TS>1683295339764</TS></E><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"provider\":\"Discover.Shell.PageContext\",\"T\":\"CI.Discover.PageContext.Provider.Register\",\"TS\":1683295360000,\"RTS\":20236,\"SEQ\":2,\"UTS\":1683295366700}]]></D><TS>1683295360000</TS></E><E><T"
		">Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"T\":\"CI.Discover.Shell.UserAuthStart\",\"TS\":1683295360001,\"RTS\":20237,\"SEQ\":3,\"UTS\":1683295366700}]]></D><TS>1683295360001</TS></E><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"T\":\"CI.Discover.Shell.UserAuthEnd\",\"TS\":1683295360124,\"RTS\":20360,\"SEQ\":4,\""
		"UTS\":1683295366700}]]></D><TS>1683295360124</TS></E><E><T>Event.ClientInst</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"Name\":\"Feedback\",\"Text\":\"sb_feedback\",\"T\":\"CI.FeedbackInit\",\"TS\":1683295360139,\"RTS\":20375,\"SEQ\":5,\"UTS\":1683295366700}]]></D><TS>1683295360139</TS></E><E><T>Event.CIQueueError</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/"
		"shell\",\"errorType\":\"SendTimedOut\",\"failCount\":1,\"TS\":1683295360141,\"RTS\":20377,\"SEQ\":6,\"UTS\":1683295366700}]]></D><TS>1683295360141</TS></E><E><T>Event.CIQueueError</T><IG>977589CA5892446ABE462DA9F5817B5C</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"errorType\":\"SendTimedOut\",\"failCount\":1,\"TS\":1683295366700,\"RTS\":26936,\"SEQ\":7,\"UTS\":1683295366700}]]></D><TS>1683295366700</TS></E></Events></ClientInstRequest>", 
		LAST);

	web_add_cookie("JSESSIONID=B8AD05B0BC5D7F74247FF6CCF6EF0C93; DOMAIN=petstore.octoperf.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-MSEdge-ClientID", 
		"35B64BF2C38D603B1306592EC2546189");

	web_add_header("X-MSEdge-UserID", 
		"61451215952A6D180D20C1E9FFFFFFFF");

	web_url("collections_2", 
		"URL=https://www.bingapis.com/api/v7/saves/edge/collections?appid=44A72CAAA7B8B99CBEF405BFAD4E9B24370F2853", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-AFS-CV", 
		"eTtqIWIq15SibJAyzso6Df");

	web_add_auto_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.23451; app=Microsoft Edge; appVer=112.0.1722.68; appChannel=stable; appInstallationId=6590404243600361798; region=BR;");

	web_add_auto_header("X-Client-Data", 
		"CJ33ygE=");

	web_custom_request("command_2", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=h9d5Wtg%2BG8FPF%2BE%2BYg5KNQ%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x10c\\x18\\x01\"\\x98\\x06\n\\xA8\\x03\n$abf62183-8391-4488-bf57-cb8fdcdc384e \\x89\\xB9\\x8E\\xE0\\xFE0(\\xF9\\xCC\\xE1\\xE1\\xFE00\\xB8\\x9D\\x92\\xD4\\xF00:\\x0FDESKTOP-3ITN24J\\x90\\x01\\x00\\xAA\\x01\\xB6\\x02\\xD2\\xB9K\\xB1\\x02\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x12\\x0FDESKTOP-3ITN24J\\x18\\x01\"SChrome WIN 112.0.1722.68 (82d34b2459d3c3260996f9cc1f0fb469816304b0) channel(stable)*\r112.0.1722.68"
		":$8dfd3ab3-1151-410a-84ff-77a361b88de2@\\xF9\\xCC\\xE1\\xE1\\xFE0J\\x02\\x08\\x01Z\\x0BVostro 3400b\tDell Inc.h\\xA0\\x0Br@\\x10\\x88\\x81\\x02\\x10\\xC6\\xA6\\x02\\x10\\xB1\\xE6\\x02\\x10\\xCF\\xF3\\x03\\x10\\xF1\\xF7\\x01\\x10\\x9E\\x95+\\x10\\xCD\\xBE\\x02\\x10\\xF7\\xF7\\x02\\x10\\x9F\\xEF\\x05\\x10\\xEB\\x95\t\\x10\\x9A\\xB7\t\\x10\\xFC\\xDE$\\x10\\xC9\\x8B)\\x10\\xA1\\xDD'\\x10\\xD0\\xAF:\\x10\\x81\\xF5\\x02\\x8A\\x01\\x0F\n\r112.0.1722.68\\xBA\\x01\\x1CeIoGGl7iGaRVTqdV3VF/nWV2tHk="
		"\\x12\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\"N\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xCF\\xF3\\x03\\x08\\xF1\\xF7\\x01\\x08\\x9E\\x95+\\x08\\xCD\\xBE\\x02\\x08\\xF7\\xF7\\x02\\x08\\xC7\\x87\\x03\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xC9\\x8B)\\x08\\xA1\\xDD'\\x08\\xD0\\xAF:\\x08\\x81\\xF5\\x02\\x10\\x01\\x18\\x00 \\x002\\x80\\x02@y[Ff\\\\>A9Q1(Du1+>Vx^UgSx'<B4|=\"cr~$7AaPbEVL4\\\\2Xz+< iyuPv:*vom2WvG/opK)K?~*HPp}N$>m/_%&, .IT"
		"}zuHNtWoJ+9Kb~^Wtxcte!*0-XLc:#U+9v*-%4pI+1s8g!nE\\\\Bm%[l.D;K5A{bqJC5AeL%+{SA^LYR3=|nlF7=q-KX: 7@CPfp^Mpg0;$jUZ+dD#; Wkm8COc,X)REN_O#g)r5`'1R!j(@_WTuWBBFs@RM-X)P^h-c&9::-ProductionEnvironmentDefinition_1662169587667R\\x06\\x10\\x01\\x18\\x00 \\x00Z\\x00b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:h9d5Wtg+G8FPF+E+Yg5KNQ==", 
		EXTRARES, 
		"Url=https://metamask.github.io/phishing-warning/v2.1.0/workbox-0d02fa54.js", "Referer=https://metamask.github.io/phishing-warning/v2.1.0/service-worker.js", ENDITEM, 
		LAST);

	web_add_header("X-AFS-CV", 
		"SATHueXIujtnNIblv3gZdu");

	web_custom_request("command_3", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=h9d5Wtg%2BG8FPF%2BE%2BYg5KNQ%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x10c\\x18\\x01\"\\xD4\\x10\n\\xDD\\x06\n$7561111b-ff01-4b38-b414-d9e700946447 \\xE9\\xC2\\x90\\xE0\\xFE0(\\xB0\\xD5\\xE1\\xE1\\xFE00\\x94\\xA7\\x8E\\xE0\\xFE0:\\x0FDESKTOP-3ITN24J\\x90\\x01\\x00\\xAA\\x01\\xEB\\x05\\xBA\\xBC\\x18\\xE6\\x05\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x1A\\xC7\\x05\\x08\\xBE\\xB6\\xE2\\xBA\\x07\\x10\\xBD\\xB6\\xE2\\xBA\\x07\\x18\\x00 \\x02(\\x002\\x00:\\xF8\\x02\\x12\\x8F\\x02https://www.bing.com/search?q=twitter&filters="
		"ufn%3a%22Twitter%22+sid%3a%22c47da78b-4fdf-3297-761e-74439706bca1%22&form=WSBEDG&qs=MB&cvid=ea25c9b9b3c24d90a72011f0c54c2561&pq=twitter&cc=BR&setlang=pt-BR&nclid=8B2EAE362CEE6B83D7742FA70EA7E902&ts=1682871875653&wsso=Moderate\\x1A\\x00\"\\x13twitter - "
		"Pesquisar0\\x08@\\x0CH\\xD9\\x99\\x8E\\xE0\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xC6\\xE0\\x91\\xB3\\x83\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x01\\xC8\\x01\\x05\\xD0\\x01\\x00\\xD8\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\xE0\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\xE0\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01:\\x81\\x01\\x12\\x1Ehttps://petstore.octoperf.com/\\x1A\\x00\"\\x0EJPetStore Demo0\\x08@\r"
		"H\\xE0\\xF5\\x8E\\xE0\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xE0\\xFB\\xE0\\xB8\\x83\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x01\\xC8\\x01\\x06\\xD0\\x01\\x00\\xD8\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\xE0\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\xE0\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01:\\xAF\\x01\\x124https://petstore.octoperf.com/actions/Catalog.action\\x1A\\x1Ehttps://petstore.octoperf.com/\"\\x0EJPetStore "
		"Demo0\\x08@\\x0EH\\xC1\\xD3\\xE1\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xA4\\xB6\\x8D\\xA7\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x00\\xD8\\x01\\x9B\\xA7\\xD4\\xB9\\x83\\xB1\\xD6\\x17\\xE0\\x01\\x9B\\xA7\\xD4\\xB9\\x83\\xB1\\xD6\\x17\\xE0\\x01\\xE0\\xFB\\xE0\\xB8\\x83\\xB1\\xD6\\x17h\\x01 \\x01\\xBA\\x01\\x1C4SQA9noJnFjyOL0XSp7f02te2nI=\n\\xAD\\x02\n$382da526-7f5c-4bf3-b3da-47006dc3bac6 \\x00(\\xE1\\xFF\\xE1\\xE1\\xFE00\\xB0\\xD5\\xE1\\xE1\\xFE0"
		":\\x0FDESKTOP-3ITN24J\\x90\\x01\\x00\\xAA\\x01\\xC0\\x01\\xBA\\xBC\\x18\\xBB\\x01\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x1A\\x9C\\x01\\x08\\xBF\\xB6\\xE2\\xBA\\x07\\x10\\xBD\\xB6\\xE2\\xBA\\x07\\x18\\x00 \\x00(\\x002\\x00:\\x83\\x01\\x12\\x1Ehttps://petstore.octoperf.com/\\x1A\\x00\"\\x0EJPetStore "
		"Demo0\\x06@\\x10H\\xA3\\xD3\\xE1\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\xF2\\x01\\x03undh\\x01 \\x02\\xBA\\x01\\x1CFRP/oXee2YLIMfkLmkowcz5jxL0=\n\\xBF\\x01\n$65553f5c-7ec4-4b4d-a3ab-736af9347851 \\xEA\\xC2\\x90\\xE0\\xFE0"
		"(\\xAD\\xE5\\xE1\\xE1\\xFE00\\xAE\\xFF\\xA3\\xD4\\xF00:\\x0FDESKTOP-3ITN24J\\x90\\x01\\x00\\xAA\\x01N\\xBA\\xBC\\x18J\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x12.\\x12\\x19\\x08\\xBD\\xB6\\xE2\\xBA\\x07\\x10\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\x18\\x01 \\xBF\\xB6\\xE2\\xBA\\x07\\x1A\\x0FDESKTOP-3ITN24J \\x01\\xBA\\x01\\x1CdCIJuT+ryBhmXA7CS//OXlEpplc=\n\\xE2\\x02\n$9453be08-7738-4ed0-ab49-5936e23b286e \\xEB\\xC2\\x90\\xE0\\xFE0(\\x9A\\xDC\\xE1\\xE1\\xFE00\\xDD\\xC5\\xAE\\xF7\\xFB0"
		":\\x0FDESKTOP-3ITN24J\\x90\\x01\\x00\\xAA\\x01\\xF0\\x01\\xBA\\xBC\\x18\\xEB\\x01\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x1A\\xCC\\x01\\x08\\xE9\\xB6\\xE2\\xBA\\x07\\x10\\xE8\\xB6\\xE2\\xBA\\x07\\x18\\x00 \\x00(\\x002\\x00:\\xB3\\x01\\x12Gchrome-extension://dknkgjgkdpkmddgdjlgdhfojlaehikmk/BackgroundPage.html\\x1A\\x00\"\\x15UiPath Web "
		"Automation0\\x00@#H\\xF3\\xD2\\xE1\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xFC\\xD5\\x88\\xA7\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x00\\xD8\\x01\\xFC\\xD5\\x88\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\xE0\\x01\\xFC\\xD5\\x88\\xA7\\x90\\xB1\\xD6\\x17\\xF2\\x01\\x03undh\\x03 \\x00\\xBA\\x01\\x1Cy/2il5e+OajluhjC9sXMzpguuAc=\n.\\xAA\\x01+\\xF2\\xBE\\x8F\\x02&\"\\x05pt-BR2\\x100003BFFDBFB961C7"
		":\\x02\\x18\\x02`\\xC3\\xAF\\xEC\\xAA\\x90\\xB1\\xD6\\x17\\x12\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\"N\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xCF\\xF3\\x03\\x08\\xF1\\xF7\\x01\\x08\\x9E\\x95+\\x08\\xCD\\xBE\\x02\\x08\\xF7\\xF7\\x02\\x08\\xC7\\x87\\x03\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xC9\\x8B)\\x08\\xA1\\xDD'\\x08\\xD0\\xAF:\\x08\\x81\\xF5\\x02\\x10\\x01\\x18\\x00 \\x012\\x80\\x02M,z6?SR0DOG;bjNYgHM)(}<e\\\\*ZzG`w[7PfW`;"
		"`9U1Q%??ymu+_P5mNfo,d4 _'z@C|F@`iRxvB9{+1\"E GrJiQUxx-o3f-5UA^%/p`!c*/1|!Ur26\\\\Fk7\"7Na{9HAd\"?z6P)?uPK.U:eUe@yMQ`{,6{FI8E33i}C$<:`M#7p,h;r!\\\\W<Qg[CByV4-=: C|awtQCP:|*UFaPFY;yyU+?r*7xLUOwE;GjH%ETw;i6z@RvG,`i$^)J6#(w_238?[Ql:-ProductionEnvironmentDefinition_1662169587667R\\x06\\x10\\x01\\x18\\x00 \\x00Z\\x00b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:h9d5Wtg+G8FPF+E+Yg5KNQ==", 
		LAST);

	web_revert_auto_header("X-AFS-ClientInfo");

	web_add_auto_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI2NTkwNDA0MjQzNjAwMzYxNzk4IiwiNSI6IlwiWHBYVWIyVUJKMVZOU3FHTmgrY2prQllHY1NCK2M5MHhycmVlaE1LUGZiND1cIiIsIjYiOiJzdGFibGUiLCI3IjoiMjk2MzUyNzQzNDI1IiwiOSI6ImRlc2t0b3AifQ==");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://ntp.msn.com");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("BBI4jJ6", 
		"URL=https://assets.msn.com/content/v1/cms/api/amp/Document/BBI4jJ6", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Client-Data", 
		"CJ33ygE=");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-AFS-CV", 
		"lyoktDLeXXd1sLoCW3eyAF");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.23451; app=Microsoft Edge; appVer=112.0.1722.68; appChannel=stable; appInstallationId=6590404243600361798; region=BR;");

	web_custom_request("command_4", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=h9d5Wtg%2BG8FPF%2BE%2BYg5KNQ%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x10c\\x18\\x01\"\\x8D\\x08\nX\n$7561111b-ff01-4b38-b414-d9e700946447 \\xB1\\xEC\\xE3\\xE1\\xFE0:\\x00\\x90\\x01\\x01\\xAA\\x01\\x04\\xBA\\xBC\\x18\\x00\\xBA\\x01\\x1C4SQA9noJnFjyOL0XSp7f02te2nI=\n\\xE9\\x03\n$382da526-7f5c-4bf3-b3da-47006dc3bac6 \\xB2\\xEC\\xE3\\xE1\\xFE0(\\x92\\xE6\\xE3\\xE1\\xFE00\\xB0\\xD5\\xE1\\xE1\\xFE0:\\x0FDESKTOP-3ITN24J\\x90\\x01\\x00\\xAA\\x01\\xF7\\x02\\xBA\\xBC\\x18\\xF2\\x02\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ=="
		"\\x1A\\xD3\\x02\\x08\\xBF\\xB6\\xE2\\xBA\\x07\\x10\\xBD\\xB6\\xE2\\xBA\\x07\\x18\\x00 \\x01(\\x002\\x00:\\x83\\x01\\x12\\x1Ehttps://petstore.octoperf.com/\\x1A\\x00\"\\x0EJPetStore "
		"Demo0\\x06@\\x10H\\xA3\\xD3\\xE1\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\xF2\\x01\\x03und:\\xB4\\x01\\x124https://petstore.octoperf.com/actions/Catalog.action\\x1A\\x1Ehttps://petstore.octoperf.com/\"\\x0EJPetStore Demo0\\x00@,"
		"H\\xB9\\xE1\\xE3\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xBE\\xA6\\xCA\\xB7\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\xBE\\xA6\\xCA\\xB7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xF2\\x01\\x02enh\\x01 \\x02\\xBA\\x01\\x1CFRP/oXee2YLIMfkLmkowcz5jxL0=\nX\n$9453be08-7738-4ed0-ab49-5936e23b286e \\xB4\\xEC\\xE3\\xE1\\xFE0"
		":\\x00\\x90\\x01\\x01\\xAA\\x01\\x04\\xBA\\xBC\\x18\\x00\\xBA\\x01\\x1Cy/2il5e+OajluhjC9sXMzpguuAc=\\x12\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\"N\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xCF\\xF3\\x03\\x08\\xF1\\xF7\\x01\\x08\\x9E\\x95+\\x08\\xCD\\xBE\\x02\\x08\\xF7\\xF7\\x02\\x08\\xC7\\x87\\x03\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xC9\\x8B)\\x08\\xA1\\xDD'\\x08\\xD0\\xAF:\\x08\\x81\\xF5\\x02\\x10\\x01\\x18\\x00 "
		"\\x012\\x80\\x02)_(8j|x$)#[\"\\\\^( @7dB8Ch`R5PWDj:xBQQ;VOX6v7uMZZ{>+j{/8Sv'c=/|[dSWZ=2e2Z(*Q,02%5,x&iYxS=>soc ^%]NP[Z?^$(%y:]si<<!(>:PE2~U'@bn_vqrHF{ Y6urtmQz$e,AniDVLCeD4eYV^z V7+'Mc#O]7(\"+Y $Eg?!m[w&?E<eB2b0%QZSEhul) ,?~8KYzp(t2q}*TK$D1NBq3(^['a} s)ul/6+62r_65%uowi},~Wz|U_:-ProductionEnvironmentDefinition_1662169587667R\\x99\\x01\n"
		"a\\x12_8\\x00@\\x00H\\x00R\\x04\\x08\\x00\\x10\\x01`\\x0C\\x92\\x03\\x18h5fW8uvrJ5FxJCGtQJemwu.1\\x92\\x03\\x18eTtqIWIq15SibJAyzso6Df.1\\x92\\x03\\x18SATHueXIujtnNIblv3gZdu.1\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\x9A\\xB7\t\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\\x10\\x01\\x18\\x00 \\x00Z\\x00b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:h9d5Wtg+G8FPF+E+Yg5KNQ==", 
		LAST);

	web_add_auto_header("Origin", 
		"https://ntp.msn.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI2NTkwNDA0MjQzNjAwMzYxNzk4IiwiNSI6IlwiWHBYVWIyVUJKMVZOU3FHTmgrY2prQllHY1NCK2M5MHhycmVlaE1LUGZiND1cIiIsIjYiOiJzdGFibGUiLCI3IjoiMjk2MzUyNzQzNDI1IiwiOSI6ImRlc2t0b3AifQ==");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("BB19jqS7", 
		"URL=https://assets.msn.com/content/v1/cms/api/amp/Document/BB19jqS7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("BB1gJTiB", 
		"URL=https://assets.msn.com/content/v1/cms/api/amp/Document/BB1gJTiB", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("USRLOC=; DOMAIN=assets.msn.com");

	web_add_cookie("_EDGE_S=F=1&SID=150DF05A8F746FFE0157E2868ED86E18; DOMAIN=assets.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=assets.msn.com");

	web_add_cookie("_SS=SID=00; DOMAIN=assets.msn.com");

	web_add_cookie("NAP=V=1.9&E=1bc6&C=p728wwpEA9uMDOGZMUBEDYAm8ZEAWmnmvRpM0yLP0K0FfwyIFoLN0w&W=1; DOMAIN=assets.msn.com");

	web_add_cookie("ANON=A=61451215952A6D180D20C1E9FFFFFFFF&E=1c20&W=1; DOMAIN=assets.msn.com");

	web_add_cookie("ace=%7b%22child%22%3a0%7d; DOMAIN=assets.msn.com");

	web_add_cookie("MSNRPSSecAuth="
		"FACKARSuWEXpa7%2fWMRDvq9MNAN2YSHACjgNmAAAEgAAACIOWqFeRuPt9SAHbz%2bekdjopRvbZzdFVeGUaWRmXpyv4nUwFe%2bijrwpQvegx3ITZyjr5VI4zyv03MYeLqBKO8w2cKBHdNMIxZogpzdnikrWVaUPObqwmsIqVHr2RKUFoGH8rverX0%2b9YUM0yFK9ZonwRg%2bP9ww6TEiAzzUbH77oZ3NmfKkRZbe3LfrBQ%2fHYnzmJe9HTtdnUk2p%2breXi0POXBTjw%2fRvjLYBml55mVQ9bey%2boHznwD%2fnTdemoj5dMLmCLqpb2gxeLkLy8zKOACY%2fB2Q8yxXwSXgSZei9K%2f0aFhMS2W5kn0oyFnU8hez3xG57owFYs%2fpOIrEJXwj2iB%2bHHwCthiP7Ezq%2f6YzQ2m7Ogpruq%2fYagMjGnRbz631FdYNBEGyi2FLfL6M8sMyZRw1CiGQIx%2fh0qEZEVTq6AH"
		"MLeHrI7rXoRhVRU6xG1mXGUJYM%2fsFAAC57U5eIe6KaDGjvHQ87nPxxXK0g%3d%3d; DOMAIN=assets.msn.com");

	web_add_cookie("MUID=35B64BF2C38D603B1306592EC2546189; DOMAIN=assets.msn.com");

	web_add_cookie("OptanonAlertBoxClosed=2023-04-20T11:56:25.538Z; DOMAIN=assets.msn.com");

	web_add_cookie("eupubconsent-v2="
		"CPqi5QOPqi5QOAcABBENC0CsAP_AAEPAACiQJNNf_X__b2_r-_5_f_t0eY1P9_7__-0zjhedl-8N3d_X_L8X52M7vF36tq4KuR4ku3LBAUdlHPHcTUmw6IkVqyPsbk2cr7NKJ7PEmnMbOydYGH9_n1_z-ZKY7___f_7z_v-v_________-3f3__5_9_-_wAAB8idzfn9_____9_P___9v-_9__________3_79_7_H8EmwCTDVuIAuzLHBk2jCKBECMKwkOoFABRQDC0QGEDq4KdlcBPrCBAAgFAE4EQIMAUYMAgAAEgCQiICQA8EAgAIgEAAIAFQiEADGwCCwAsDAIABQDQsUYoAhAkIMiAiKUwICpEgoJ7KhBKD_Q0whDrKACgwAAACADWQMVgRCQsHIcASAl4skDzFG-QAjBCgFEqFaik9NAIDQIQArABcAEMAMgAZYA2QB2AD8AIAAQUAjABTwCrwFoAWkA1gBvADqgHyAQ6AioBIg"
		"CdgFIgLkAYSAxgBk4DOQGeAM-AfgBH8CRQYAUAOYA6gCQgEigMjAboA4kB2YD3QIfCABgAJABzAG8ASEAkUBugDiQHZgPdAfYBD4COgiA0AFYAQwAyABlgDZAHYAPwAgABGACngFXANYAdUA-QCHQEiAJ2AUiAuQBhIDJwGcgM-AfgBH8CRQqAwABQAIYATAAuACOAGWAOwAjgBV4C0ALSAbwBIIC2AFyALzAZEAzkBngDPgG5APwAheBH8CRQoAaANoAcwA8ACCgHVAR6AkUBrwDbwHEgPsAgeBBsZAVACGAEwARwAywB2AEcAKuAVsA3gCTgFogLYAXmAyIBnIDPAGfAPwAheBH8CRQwAYANoAcwA8ACxAHVAR6AkUBeQDbwHEgPsAg2.f_gACHgAAAAA; DOMAIN=assets.msn.com");

	web_add_cookie("OptanonConsent=isGpcEnabled=0&datestamp=Thu+Apr+20+2023+08%3A56%3A25+GMT-0300+(GMT-03%3A00)&version=6.25.0&isIABGlobal=false&hosts=&consentId=d2d33d65-90dd-4adc-be75-51ee2c73ae48&interactionCount=2&landingPath=NotLandingPage&groups=C0001%3A1%2CC0002%3A1%2CC0003%3A1%2CC0004%3A1%2CSTACK42%3A1&AwaitingReconsent=false; DOMAIN=assets.msn.com");

	web_add_cookie("lt=t=EwBgA6AEAAAURnNPDOP4v1G28DRF5A6y6RDoGigAAVC0DZ0RsphkNUSE8c0Hkg3xoeXQLtS2Tp+Kc0OtpGllCbY7osuH+RmIvJ1Yx3IrP4G1Yk0Fly6Us8SsqPjEE+oyz5KubiZfDwzejgEavmJG8nBM498tIxvQgqSNIUL5ZWOVGhGWFIAS2IPchNNEPoqhWFAgdzD5SyLO4cpTSI6xVs4gVvt/ulsrX83G1SaMn8KiSsyo3J+u/31BHuJcKwNuKeOvuqT+/5YSnvNw+oN9Dy9bmJkjLcVuUkGqhqRzw35uy65JqUImAp/Y++U1GJ1MA8LmDEGHeeM9XWBtyAlRXiKW7zrizfjrOZIav6NDXT5Y5LVfK2k5ZJP1WIFwQ3cDZgAACIujJp1adAqwMALdyOJ58d39K7kQJHmlfjiGV9DPBi/hYxm3K58/2/JCml8Uys1yRd+uH/"
		"frimPqUnOMKmOpZs7d1oIqqef0sY3NNjOy2eSIQluXiNXrtZBQuITFTThtICYsU0UG/wLUsCBiJvYWZdB8IZ924B2s/zO5kyRONWGFm0NLJHteEYGwmrsRsxmVjB6/bFFglKpmpaK0K5Vr/0T7lv3dfQVXWxD//9rUNebJoB8CieBHrzJk76c16fkchcHVfXiemHEZvTDstpU5SIQV+3mKCzQlY+dR7U84GF1A0q+0ZCAwkbC1d7J1s8p6fxjZEd4pPkPVteoAzJ3i0v2Kyh4MYYYvYCPqpLuueRGZPnoMxY9jYguZDiXTGqm9u3E+0qvGgYNRYzDZIJEkwnSqMN19TqOpNK++3DEhp083LDbkLIJKmUhoNB3PTI9Djdr4xKBc0TRTOTy0pLJuxqaPP9SsWhauX2K8ivUWZVN6zra1ooyA6NjETZLptSF7qB+ukctVpTaJz7ibCQOut/Yp8QiTLOkn5oHyz1oCrf4QoOnXoZJIOM/"
		"Ntd6JgEhUFyzRyCQVpknu0lRqMagIsrktDLoBYf/b+97fttTW+7Sih7qxq2GwaaKnEMzPCAs6EMRYALfjjQiT0+C9ZI6Hqy5mDDd9iRxFFeJdiC/OCCjAb6+UOtTTdp3E5WNeccYZOo47m1VnPGBl5urbTtGc95zNK4Oaee+ogNoJX0tzYzAEFEMLPmLQN8fWF10C&p=; DOMAIN=assets.msn.com");

	web_url("ntp_2", 
		"URL=https://assets.msn.com/serviceak/news/feed/pages/ntp?User=m-35B64BF2C38D603B1306592EC2546189&activityId=C21AC699-DEC3-4D59-9367-F956C327C975&apikey=0QfOX3Vn51YCzitbLaRkTTBadtWpgTN8NZLW0C1SEM&audienceMode=adult&caller=bgtask&cm=pt-br&contentType=article,video,slideshow,webcontent&duotone=true&infopaneCount=17&it=app&memory=8&newsSkip=0&newsTop=48&ocid=anaheim-ntp-feeds&prerender=1&scn=APP_ANON&timeOut=1000&wposchema=byregion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/weathermapdata/1/static/weather/Icons/taskbar_v5/humidity.svg", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	web_url("AA2DxFZ", 
		"URL=https://assets.msn.com/breakingnews/v1/cms/api/amp/article/AA2DxFZ", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/AAYdj7O?w=44&h=44&q=60&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	web_url("Rewards", 
		"URL=https://assets.msn.com/service/News/Users/me/Rewards?apikey=1hYoJsIRvPEnSkk0hlnJF2092mHqiz7xFenIFKa9uc&activityId=C21AC699-DEC3-4D59-9367-F956C327C975&ocid=rewards-peregrine&cm=pt-br&it=app&user=m-35B64BF2C38D603B1306592EC2546189&scn=APP_ANON&version=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/AAYdvWa?w=48&h=48&q=60&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/AAZC4yq?w=48&h=48&q=60&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/AAYcZWp?w=48&h=48&q=60&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/AAYdygI?w=48&h=48&q=60&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/AAYdygS?w=48&h=48&q=60&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/AAZBTzx?w=48&h=48&q=60&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	lr_end_transaction("01_ENTER_THE_STORE",LR_AUTO);

	lr_think_time(3);

	web_url("Exchanges", 
		"URL=https://assets.msn.com/service/Finance/Exchanges?apikey=1hYoJsIRvPEnSkk0hlnJF2092mHqiz7xFenIFKa9uc&activityId=C21AC699-DEC3-4D59-9367-F956C327C975&ocid=finance-utils-peregrine&cm=pt-br&it=app&ids=r6dwnn&wrapodata=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/BBsNRdy?w=16&h=16&q=100&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/AAUqqX3?w=16&h=16&q=100&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/BB1gtGTH?w=16&h=16&q=100&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/AAdg7kk?w=16&h=16&q=100&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/AAgx9GT?w=16&h=16&q=100&m=6&f=png&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		"Url=https://img-s-msn-com.akamaized.net/tenant/amp/entityid/BB10piIP.img?w=300&h=180&q=90&m=6&f=jpg&u=t", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("X-Client-Data");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://th.bing.com");

	web_custom_request("report", 
		"URL=https://aefd.nelreports.net/api/report?cat=bingth", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("report_2", 
		"URL=https://aefd.nelreports.net/api/report?cat=bingth", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":1,\"body\":{\"elapsed_time\":6543,\"method\":\"GET\",\"phase\":\"connection\",\"protocol\":\"h3\",\"referrer\":\"https://ntp.msn.com/\",\"sampling_fraction\":1.0,\"server_ip\":\"2600:1419:d400::1749:d809\",\"status_code\":200,\"type\":\"h3.protocol.error\"},\"type\":\"network-error\",\"url\":\"https://th.bing.com/th?id=ORMS.f1c64969628107d2950f2a88b523fcbb&pid=Wdp&w=612&h=304&qlt=90&c=1&rs=1&dpr=1&p=0\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 "
		"(KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.68\"}]", 
		EXTRARES, 
		"Url=https://assets.msn.com/weathermapdata/1/static/weather/Icons/taskbar_v7/Teaser/humidity.svg", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	lr_start_transaction("02_SELECT_CATEGORY");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("Catalog.action_2", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://assets.msn.com/weathermapdata/1/static/weather/Icons/taskbar_v7/Condition/D200PartlySunnyV2.svg", "Referer=https://ntp.msn.com/", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"112.0.1722.68");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.23451");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Client-Data", 
		"CJ33ygE=");

	web_add_header("X-Microsoft-Update-AppId", 
		"eeobbhfgfagbclfofmgbdfoicabjdbkn,ohckeflnhegojcjlcpbfpciadgikcohk,oankkpibpaokgecfckkdkgaoafllipag,ndikpojcjlepofdkaaldkinkjbeeebkl,ahmaebgpfccdhgidjaidaoojjcijckba,kpfehajjjbbcifeehjgfgnabifknmdad,mkcgfaeepibomfapiapjaceihcojnphg,ojblfafjmiikbkepnnolpgbbhejhlcim,alpjnmnfbgfkmmpcfpejmmoebdndedno,lkkdlcloifjinapabfonaibjijloebfb,jbfaflocpnkhbgcijpkiafdpbjkedane,fppmbhmldokgmleojlplaaodlkibgikh,hjaimielcgmceiphgjjfddlgjklfpdei,lfmeghnikdkbonehgjihjebgioakijgn,omnckhpgfmaoelhddliebabpgblmmnjp,"
		"cllppcmmlnkggcmljjfigkcigaajjmid,mpicjakjneaggahlnmbojhjpnileolnb,plbmmhnabegcabfbcejohgjpkamkddhn,llmidpclgepbgbgoecnhcmgfhmfplfao,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"6948");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-112.0.1722.68");

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=6:oMLpJIHrjgEYxKyCbH0EPpE9fy13R8mtyJYBImsXuXw&cup2hreq=39b1d86b7d924f27e1e9583e9b65f9653778b2dd5278ab92c8416a115484cfd8", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.28\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.28\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.28,\"AppVersion\":\"112.0.1722.68\","
		"\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.49\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.49\",\"AppMajorVersion\":\"112\",\""
		"AppRollout\":0.49,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.27\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.8F3CA7027E9AF306E210170760F05487A86C0C4F7C3B64C1E22B492A8EB31125\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\""
		"AppCohort\":\"rrf@0.27\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.27,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"6498.2023.3.1\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.51\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\""
		"1.FDBBAED3B7A4C6AD0DB7ACEA2484CDCC8A836A1892B32451A2DA25150FDDC667\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.51\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.51,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"10.34.0.47\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.02\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"pt-BR\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.02\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.02,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.97\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\""
		"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.97\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.97,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.73\",\"enabled\":true,\"installdate\":-1,"
		"\"lang\":\"pt-BR\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.73\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.73,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.66\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.66\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.66,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"4.10.2557.0\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.65\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\""
		"1.8F202CFB86D1EF0B5FE116718DFEDB375BB50534A1D45F02FC95BD099FDC183F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.65\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.65,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"7.0.0.0\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.89\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.8DB8EE0201AAEE92134313B2CDF5C6EF621CC95B61F0817A056E5020111EF340\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.89\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.89,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"4.0.2.18\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\""
		":\"rrf@0.94\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.94\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.94,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.23\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.70\",\"enabled\":true,\"installdate\":-1,\"lang"
		"\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.70\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.7,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\""
		"rrf@0.23\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.0A896B25442E25516B574F8632D6D38AFF3938B0E5F6502A6E5B16C2ADFFF2BD\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.23\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.23,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.3\"},{\"appid\":\""
		"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.96\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.A6A52F9D482FBF40243313DE9CBA3A58E8C08CBE5FD75AE77C7F56824A47AAFE\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.96\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.96,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\""
		"updatecheck\":{},\"version\":\"1.1.0.6\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.25\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.25\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.25,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.93\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.882EBB9C1564CA0ACF603770DFEAD630AA2433B5DF601D4F8D230AED7C5A818C\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.93\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.93,\"AppVersion\":\""
		"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"112.15267.15264.1\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.30\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.1C79A44E4A60D8D54D6ED2711F4B0FFE768C0BE343828EA2F0C9A3B12B3D74C7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.30\",\""
		"AppMajorVersion\":\"112\",\"AppRollout\":0.3,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"4.0.0.0\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.86\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.29465CE98BA3195F599A775441E1E289994B1F9D10F55FFDF4936B013BDFB098\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.86\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.86,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"2952\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.25\",\"enabled\":true,\"installdate\":-1,\"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\""
		"1.DA3E756AA191B576EB4C7415546A2F8E36E1D11AC4E41ECF31D28A5C417BF0BA\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.25\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.25,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"2.0.4867.0\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.34\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"pt-BR\",\"packages\":{\"package\":[{\"fp\":\"1.01ABB1A14967FB06B48808C1FF9C7EE1FBEA741E3688997639BE0A5D428DDE66\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.34\",\"AppMajorVersion\":\"112\",\"AppRollout\":0.34,\"AppVersion\":\"112.0.1722.68\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.173.55\"},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":1"
		",\"physmemory\":16,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"sku\":\"desktop\",\"version\":\"10.0.23451.1000\"},\"prodversion\":\"112.0.1722.68\",\"protocol\":\"3.1\",\"requestid\":\"{299d7bc2-3939-473b-89c9-a6c5613bd6b1}\",\"sessionid\":\"{7ccb4b40-f9e6-4469-81e7-af9f9d85e257}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,"
		"\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.173.55\"},\"updaterversion\":\"112.0.1722.68\"}}", 
		EXTRARES, 
		"Url=/neededge/v1?bucket=39", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Upload-Time", 
		"1683295394503");

	web_add_auto_header("APIKey", 
		"70109aa3567b40e3bb8ac9e67a07b58a-b00e4868-b511-4be4-90dd-6370c812f0af-7167");

	web_add_auto_header("Client-Id", 
		"NO_AUTH");

	web_add_auto_header("Expect", 
		"100-continue");

	web_add_auto_header("SDK-Version", 
		"EVT-Windows-C++-No-3.5.131.1");

	web_add_auto_header("Tickets", 
		"\"10001\"=\"p:t=GwB2AbuEBAAUKFVEGReoCdHdlh1TorgVuqX+P2gOZgAAEJPgs08ziDWvTdKEksyFRYdAAbqTvY9uY+7eXcxA+xHycbVfFnnJWPRnFhjxENDYAx0/cASzExHjaBC2fQE293t0zY+3XVkrCqsax3AbtTy8UHt368EZwl8u9paaBvKCn/Rsd0j/8mM42YU8tEdsVDDpu6Y12heoNe3aUC+ql35HjtQiahKNcKaQkenO715TtAd3lGh5ins4vqJbALp1J+mtPa0YNjML0KoiJ78winTSCCpRRfYd445Dxs5N7MLSMC5cITusyLam8wSPqUSQv95CZl84BmKfQYFcCkboEQmfvwCdZ6ysOZqboQws9AlmLeLsWAl4xWEIkyO9a9W0lC5uTB368D8+"
		"imtIwKMtgKLlMfQHUgk2XWK0fDXXNvGUYM3ymq30xh1TkeJltyBNNrAdMHEKQZgzpKAwifguIxqdgvkMV6SxfG5pZOd/qdWypgY8YgE=&p=\"");

	web_custom_request("1.0", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x033.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\x9A\\xC6\\xE7\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x1E\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows "
		"Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q<\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n"
		"\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$1e95b4dc-25e1-4070-a457-3b5483dd3ba5\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\tIsAADUser0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:09.241Z\\x00\rnavigationUrliRhttps://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId="
		"FISH\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?Microsoft.WebBrowser.Personalization.SAN.NavigateElementClickedq\\x8A\\xAA\\xE6\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x1D\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows "
		"Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q:\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n"
		"\\x01-\t\n\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d740a861-c1b9-45ac-8fab-8bece9ebfc46\\x00\\x10DOMAnchorHrefUrliRhttps://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH\\x00\\x0EDOMElementPathipA|0||;DIV|1|SidebarContent|;DIV|1|Sidebar|;DIV|3|Main|;DIV|3|Content|;BODY|2||;HTML|1||"
		"%20wjmfaibagjk%20idc0_347\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:09.233Z\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\x8A\\xAA\\xE6\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x1C\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q8\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d740a861-c1b9-45ac-8fab-8bece9ebfc46\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07SimHash0\\x00\\x91\\xF0\\xEA\\xBE\\xDF\\xEE\\xA0\\xF4\\xB1\\xD5\\x01\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:47.963Z\\x00\rnavigationUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xD6\\x8D\\xE5\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x1B\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows "
		"Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q6\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n"
		"\\x01-\t\n\n\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d740a861-c1b9-45ac-8fab-8bece9ebfc46\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:47.408Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x033.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xD6\\x8D\\xE5\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x1A\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell "
		"Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q4\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d740a861-c1b9-45ac-8fab-8bece9ebfc46\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\tIsAADUser0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:47.367Z\\x00\rnavigationUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli\\x1Ehttps://petstore.octoperf.com/\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x033.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\xE4\\xF0\\xE3\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x19\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro "
		"3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q2\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d740a861-c1b9-45ac-8fab-8bece9ebfc46\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:47.366Z\\x00\r"
		"navigationUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli\\x1Ehttps://petstore.octoperf.com/\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xE4\\xF0\\xE3\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x18\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n"
		"\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q0\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n"
		"\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d740a861-c1b9-45ac-8fab-8bece9ebfc46\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\tIsAADUser0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:44.234Z\\x00\rnavigationUrli4https://petstore.octoperf.com/actions/"
		"Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?Microsoft.WebBrowser.Personalization.SAN.NavigateElementClickedq\\xD6\\xD5\\xE2\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x17\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n"
		"\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q.\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d887a0fc-8829-48e1-b08b-f9c1c96b6f17\\x00\\x10DOMAnchorHrefUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x0EDOMElementPathiCA|0||;P|3||;DIV|1|Content|;BODY|2||;HTML|2||%20hlvsaycam%20idc0_347\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02"
		":44.226Z\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xD6\\xD5\\xE2\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x16\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW"
		":00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q,\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$97aa8be4-bcb8-49ce-a72d-2fe85f45d32b\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91 \\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\tIsAADUser0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xF0\\xED\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:21.100Z\\x00\rnavigationUrliUhttps://ntp.msn.com/edge/"
		"ntp?locale=pt-BR&title=Nova%20guia&dsp=1&sp=Bing&prerender=1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrl\\x00\\x12referUrlRejectCode0\\x00\\x91\\xD6\\x01\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\xD6\\xD5\\xE2\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n"
		"\\x01K\\x0B\\x01\t\\x15\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n"
		"\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q*\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d887a0fc-8829-48e1-b08b-f9c1c96b6f17\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07SimHash0\\x00\\x91\\x9B\\xCD\\xF4\\xEA\\x90\\xB2\\xD9\\xC5\\xB7\\x01\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:18.471Z\\x00\rnavigationUrli\\x1Ehttps://petstore.octoperf.com/\\x00\\x17navigationUrlRejectCode0\\x00\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\x8E\\xB8\\xE1\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x14\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW"
		":00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q(\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n"
		"\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d887a0fc-8829-48e1-b08b-f9c1c96b6f17\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:18.267Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?"
		"Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\x80\\x9C\\xE0\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x13\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q&"
		"\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$97aa8be4-bcb8-49ce-a72d-2fe85f45d32b\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91 \\x00\tIsAADUser0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x05TabId0\\x00\\x91\\xF0\\xED\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02"
		":17.881Z\\x00\rnavigationUrliUhttps://ntp.msn.com/edge/ntp?locale=pt-BR&title=Nova%20guia&dsp=1&sp=Bing&prerender=1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I2Microsoft.WebBrowser.Personalization.SAN.TabClosedq\\x80\\x9C\\xE0\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x12\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW"
		":00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q$\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\t"
		"\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$19e5266a-1316-49d3-867a-65cc35d1d7ab\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xFC\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:15.081Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x033.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\x80\\x9C\\xE0\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x11\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\""
		"\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$19e5266a-1316-49d3-867a-65cc35d1d7ab\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x14\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\tIsAADUser0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x10NavigationSource0\\x00\\x91\\x10\\x00\\x05TabId0\\x00\\x91\\xFC\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:12.814Z\\x00\rnavigationUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli\\x1Ehttps://petstore.octoperf.com/\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00"
		")\\x033.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\x80\\x9C\\xE0\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x10\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q "
		"\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$19e5266a-1316-49d3-867a-65cc35d1d7ab\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xFC\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:12.814Z\\x00\rnavigationUrli4https://petstore.octoperf.com/actions/"
		"Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\x80\\x9C\\xE0\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n"
		"\\x01K\\x0B\\x01\t\\x0F\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904"
		"!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x1E\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d887a0fc-8829-48e1-b08b-f9c1c96b6f17\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\tIsAADUser0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x10NavigationSource0\\x00\\x91\\x0C\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:12.791Z\\x00\rnavigationUrli\\x1Ehttps://"
		"petstore.octoperf.com/\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrl\\x00\\x12referUrlRejectCode0\\x00\\x91\\xD6\\x01\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\xD8\\x81\\xDF\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x0E\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904"
		"!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x1C\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d887a0fc-8829-48e1-b08b-f9c1c96b6f17\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:12.791Z\\x00\rnavigationUrli\\x1Ehttps://petstore.octoperf.com/\\x00\\x17navigationUrlRejectCode0\\x00\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrl\\x00\\x12referUrlRejectCode0\\x00\\x91\\xD6\\x01\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xD8\\x81\\xDF\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\r"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709"
		"!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x1A\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n"
		"\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7d5159dd-bde7-4542-830f-997eb73b2b7c\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x15UiPath Web Automation\\x00\\x05TabId0\\x00\\x91\\xD2\\xED\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:12.767Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x033.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xD8\\x81\\xDF\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x0C\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n"
		"\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x18\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n"
		"\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7d5159dd-bde7-4542-830f-997eb73b2b7c\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x1A\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\tIsAADUser0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xD2\\xED\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02"
		":12.745Z\\x00\rnavigationUrl\\x00\\x17navigationUrlRejectCode0\\x00\\x91\\x04\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrl\\x00\\x12referUrlRejectCode0\\x00\\x91\\xD6\\x01\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\xD8\\x81\\xDF\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x0B\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709"
		"!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x16\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7d5159dd-bde7-4542-830f-997eb73b2b7c\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xD2\\xED\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:12.745Z\\x00\rnavigationUrl\\x00\\x17navigationUrlRejectCode0\\x00\\x91\\x04\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrl\\x00\\x12referUrlRejectCode0\\x00\\x91\\xD6\\x01\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I3Microsoft.WebBrowser.Personalization.SAN.TabCreatedq\\xD8\\x81\\xDF\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\n\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell"
		" Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x14\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\t\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7d5159dd-bde7-4542-830f-997eb73b2b7c\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xD2\\xED\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:12.565Z\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xD8\\x81\\xDF\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\t\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n"
		"\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x12\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7d5159dd-bde7-4542-830f-997eb73b2b7c\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x1A\\x00\tIsAADUser0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x05TabId0\\x00\\x91\\xD2\\xED\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:12.548Z\\x00\rnavigationUrl\\x00\\x17navigationUrlRejectCode0\\x00\\x91\\x04\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I3Microsoft.WebBrowser.Personalization.SAN.TabCreatedq\\xA2\\xE4\\xDD\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x08\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904"
		"!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x10\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\t"
		"\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d887a0fc-8829-48e1-b08b-f9c1c96b6f17\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:11.076Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?"
		"Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xA2\\xE4\\xDD\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x07\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows "
		"Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x0E\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9"
		"<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$d887a0fc-8829-48e1-b08b-f9c1c96b6f17\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\tIsAADUser0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:11.012Z\\x00\rnavigationUrli\\x1Ehttps://petstore.octoperf.com/"
		"\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xA2\\xE4\\xDD\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x06\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n"
		"\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x0C\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$19e5266a-1316-49d3-867a-65cc35d1d7ab\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x14\\x00\tIsAADUser0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x05TabId0\\x00\\x91\\xFC\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:10.933Z\\x00\rnavigationUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I3Microsoft.WebBrowser.Personalization.SAN.TabCreatedq\\xAE\\xC7\\xDC\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x05\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904"
		"!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\n\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\t"
		"\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuid\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xFC\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:02:10.897Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I="
		"Microsoft.WebBrowser.Personalization.SAN.PreferenceSanConsentq\\xAE\\xC7\\xDC\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x04\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows "
		"Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x08\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9"
		"<\\x06custom\\xCBF\n\\x01-\t\n\\x08\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\nSanConsent0\\x0C\\x91\\x02\\x00\tTimestampi\\x182023-05-05T14:02:10.459Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I4Microsoft.WebBrowser.Personalization.SAN.BrowserInfoq\\xAE\\xC7\\xDC\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x03\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709"
		"!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x06\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x08\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x08Languagei\\x05pt-BR\\x00\t"
		"Timestampi\\x182023-05-05T14:02:10.459Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0IOMicrosoft.WebBrowser.Personalization.SAN.PreferenceDefaultSearchProviderCurrentq\\xAE\\xC7\\xDC\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x02\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n"
		"\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x04\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\t\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x14DSPCurrentRejectCode0\\x00\\x00\rDSPCurrentUrliU{bing:baseURL}search?q={searchTerms}&{bing:cvid}{bing:msb}{google:assistedQueryStats}\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tTimestampi\\x182023-05-05T14:02"
		":10.459Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0IBMicrosoft.WebBrowser.Personalization.SAN.PreferenceHomepageCurrentq\\xAE\\xC7\\xDC\\xDB\\xAE\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x01\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\x02\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x08\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x19HomepageCurrentRejectCode0\\x00\\x00\\x12HomepageCurrentUrli\\x1Dhttps://brunodorea.github.io/\\x00\tTimestampi\\x182023-05-05T14:02:10.443Z\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	web_add_header("Upload-Time", 
		"1683295408076");

	web_custom_request("1.0_2", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\xB8\\xF5\\xC6\\xF8\\xAF\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\""
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n"
		"\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qD\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n"
		"\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$1e95b4dc-25e1-4070-a457-3b5483dd3ba5\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07SimHash0\\x00\\x91\\xD8\\xF3\\xDC\\xBF\\xFD\\xEC\\xDA\\xF5\\x16\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:26.937Z\\x00\rnavigationUrliRhttps://petstore.octoperf.com/actions/Catalog.action?viewCategory=&"
		"categoryId=FISH\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xB8\\xC0\\xE7\\xF7\\xAF\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"!\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n"
		"\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qB\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n"
		"\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$1e95b4dc-25e1-4070-a457-3b5483dd3ba5\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:26.858Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x033.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xA0\\xF5\\x97\\xF7\\xAF\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t "
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows "
		"Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q@\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n"
		"\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$1e95b4dc-25e1-4070-a457-3b5483dd3ba5\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\tIsAADUser0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:26.793Z\\x00\rnavigationUrliRhttps://"
		"petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\x82\\xE7\\x91\\xF7\\xAF\\xDC\\xA6\\xDB\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x1F\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q"
		">\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$1e95b4dc-25e1-4070-a457-3b5483dd3ba5\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:26.788Z\\x00\rnavigationUrliRhttps://petstore.octoperf.com/actions/"
		"Catalog.action?viewCategory=&categoryId=FISH\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	lr_end_transaction("02_SELECT_CATEGORY",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("03_SELECT_PRODUCT_ID");

	web_revert_auto_header("APIKey");

	web_revert_auto_header("Client-Id");

	web_revert_auto_header("Expect");

	web_revert_auto_header("SDK-Version");

	web_revert_auto_header("Tickets");

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.68\",\"identity\":{\"user\":{\"locale\":\"pt-BR\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEPchrdSQDUxGYAKG8fPgUebgAHG3CwfQxs2+vqEEndBuHZ61ekMI+hcnQpu3t7i5o0yyklsvn/ro3I5AWvl2V5RenyLo9eFXQGtaehw52YolQ2Fe2U80Ia6bzGKdTvd/InDHnI/ZP7T5TwnA57Jq47h/"
		"F912yr9My1XtRR748V3gKin92vqR0fhDPwximQDO7yKYAC2g3pHQXv6ZhHw2g0xvEkRsWVv52TGdGJPi6ITAR1u2ZGOkLEigl13XfOcL4HfOsVaGDW3c/NNcrJWtCnuVtjaTf/Tm+ra7tUb2McFlbRUXPQDC4B7/TWydGIiPNyJ/HgE=&p=\",\"family\":3,\"locale\":\"pt-BR\",\"osVersion\":\"10.0.23451.1000.ni_prerelease\",\"browser\":{\"internet_explorer\":\"9.11.23451.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"pt-BR\",\"name\":\"anaheim\",\"version\":\"112.0.1722.68 (Official build) \"},\""
		"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"170540185939602997400506234197983529371\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"636976985063396749.rel.v2\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-0\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\""
		"destination\":{\"uri\":\"https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\",\"ip\":\"49.12.128.248\"},\"referrer\":{\"uri\":\"https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH\",\"ip\":\"49.12.128.248\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"ec7ede8a-e04a-4bae-9590-098f3664a93b\",\"synchronous\":false}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("Catalog.action_3", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://data-edge.smartscreen.microsoft.com/api/browser/edge/data/toptraffic/3?pushcert=false&os=10.0.23451.1000.ni_prerelease", "Referer=", ENDITEM, 
		"Url=https://data-edge.smartscreen.microsoft.com/api/browser/edge/data/bloomfilter/x/3?pushcert=false&os=10.0.23451.1000.ni_prerelease", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("3_2", 
		"URL=https://data-edge.smartscreen.microsoft.com/api/browser/edge/data/settings/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"identity\":{\"user\":{\"locale\":\"pt-BR\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEPchrdSQDUxGYAKG8fPgUebgAHG3CwfQxs2+vqEEndBuHZ61ekMI+hcnQpu3t7i5o0yyklsvn/ro3I5AWvl2V5RenyLo9eFXQGtaehw52YolQ2Fe2U80Ia6bzGKdTvd/InDHnI/ZP7T5TwnA57Jq47h/F912yr9My1XtRR748V3gKin92vqR0fhDPwximQDO7yKYAC2g3pHQXv6ZhHw2g0xvEkRsWVv52TGdGJPi6ITAR1u2ZGOkLEigl13XfOcL4HfOsVaGDW3c/NNcrJWtCnuVtjaTf/Tm+ra7tUb2McFlbRUXPQDC4B7/TWydGIiPNyJ/HgE=&p=\",\""
		"family\":3,\"locale\":\"pt-BR\",\"osVersion\":\"10.0.23451.1000.ni_prerelease\",\"browser\":{\"internet_explorer\":\"9.11.23451.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"pt-BR\",\"name\":\"anaheim\",\"version\":\"112.0.1722.68 (Official build) \"},\"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"170540185939602997400506234197983529371\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\""
		"636976985063396749.rel.v2\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-0\"}}}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_header("Edge-Asset-Group", 
		"EntityExtractionPicl");

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"112.0.1722.68");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.23451");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("find-assets", 
		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=extraction.proactiveProduct.en-us&version=5.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("APIKey", 
		"70109aa3567b40e3bb8ac9e67a07b58a-b00e4868-b511-4be4-90dd-6370c812f0af-7167");

	web_add_header("Client-Id", 
		"NO_AUTH");

	web_add_header("Expect", 
		"100-continue");

	web_add_header("SDK-Version", 
		"EVT-Windows-C++-No-3.5.131.1");

	web_add_header("Tickets", 
		"\"10001\"=\"p:t=GwB2AbuEBAAUKFVEGReoCdHdlh1TorgVuqX+P2gOZgAAEJPgs08ziDWvTdKEksyFRYdAAbqTvY9uY+7eXcxA+xHycbVfFnnJWPRnFhjxENDYAx0/cASzExHjaBC2fQE293t0zY+3XVkrCqsax3AbtTy8UHt368EZwl8u9paaBvKCn/Rsd0j/8mM42YU8tEdsVDDpu6Y12heoNe3aUC+ql35HjtQiahKNcKaQkenO715TtAd3lGh5ins4vqJbALp1J+mtPa0YNjML0KoiJ78winTSCCpRRfYd445Dxs5N7MLSMC5cITusyLam8wSPqUSQv95CZl84BmKfQYFcCkboEQmfvwCdZ6ysOZqboQws9AlmLeLsWAl4xWEIkyO9a9W0lC5uTB368D8+"
		"imtIwKMtgKLlMfQHUgk2XWK0fDXXNvGUYM3ymq30xh1TkeJltyBNNrAdMHEKQZgzpKAwifguIxqdgvkMV6SxfG5pZOd/qdWypgY8YgE=&p=\"");

	web_add_header("Upload-Time", 
		"1683295432964");

	web_custom_request("1.0_3", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\x96\\xCA\\xCE\\xD2\\xB1\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"(\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qP\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$09e80175-04c0-4336-a600-bd1900d0202f\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07SimHash0\\x00\\x91\\xC8\\xEB\\x98\\xDF\\xFD\\xC8\\xBA\\xB6\\xD6\\x01\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:49.802Z\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId="
		"FI-SW-01\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xC2\\xA4\\xB4\\xD1\\xB1\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"'\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qN\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$09e80175-04c0-4336-a600-bd1900d0202f\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03"
		":49.676Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\x8C\\xC8\\x82\\xD1\\xB1\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t&"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qL\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$09e80175-04c0-4336-a600-bd1900d0202f\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\tIsAADUser0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:49.635Z\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrliRhttps://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId="
		"FISH\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\x80\\xAC\\x81\\xD1\\xB1\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"%\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qJ\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$09e80175-04c0-4336-a600-bd1900d0202f\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:49.635Z\\x00\r"
		"navigationUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrliRhttps://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?"
		"Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xB4\\xD6\\xBF\\xCA\\xB1\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"$\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qH\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$09e80175-04c0-4336-a600-bd1900d0202f\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\tIsAADUser0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:48.951Z\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?"
		"Microsoft.WebBrowser.Personalization.SAN.NavigateElementClickedq\\xF6\\xAC\\xB8\\xCA\\xB1\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"#\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qF\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$1e95b4dc-25e1-4070-a457-3b5483dd3ba5\\x00\\x10DOMAnchorHrefUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\\x00\\x0EDOMElementPathimA|0||;TD|1||;TR|2||;TBODY|1||"
		";TABLE|3||;DIV|3|Catalog|;DIV|3|Content|;BODY|2||;HTML|1||%20ulvpkxsa%20idc0_347\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:03:48.945Z\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		EXTRARES, 
		"Url=https://edgeassetservice.azureedge.net/assets/extraction.proactiveProduct.en-us/5.9.0/asset?sv=2017-07-29&sr=c&sig=VBUha8aZq2CR6BVgg4iR2AzxZ9sd72hf%2BVSuB6e%2BhKA%3D&st=2021-01-01T00%3A00%3A00Z&se=2023-07-30T00%3A00%3A00Z&sp=r&assetgroup=EntityExtractionPicl", "Referer=", ENDITEM, 
		LAST);

	web_add_header("X-AFS-CV", 
		"KUYHw+v3x+Sh1WhT++bMLy");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.23451; app=Microsoft Edge; appVer=112.0.1722.68; appChannel=stable; appInstallationId=6590404243600361798; region=BR;");

	web_add_header("X-Client-Data", 
		"CJ33ygE=");

	web_custom_request("command_5", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=h9d5Wtg%2BG8FPF%2BE%2BYg5KNQ%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x10c\\x18\\x01\"\\xCF\n\n\\xDF\\x07\n$382da526-7f5c-4bf3-b3da-47006dc3bac6 \\xEB\\xF2\\xE3\\xE1\\xFE0(\\xF5\\xC8\\xE7\\xE1\\xFE00\\xB0\\xD5\\xE1\\xE1\\xFE0:\\x0FDESKTOP-3ITN24J\\x90\\x01\\x00\\xAA\\x01\\xED\\x06\\xBA\\xBC\\x18\\xE8\\x06\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x1A\\xC9\\x06\\x08\\xBF\\xB6\\xE2\\xBA\\x07\\x10\\xBD\\xB6\\xE2\\xBA\\x07\\x18\\x00 \\x03(\\x002\\x00:\\x83\\x01\\x12\\x1Ehttps://petstore.octoperf.com/\\x1A\\x00\"\\x0EJPetStore "
		"Demo0\\x06@\\x10H\\xA3\\xD3\\xE1\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\xF2\\x01\\x03und:\\xB4\\x01\\x124https://petstore.octoperf.com/actions/Catalog.action\\x1A\\x1Ehttps://petstore.octoperf.com/\"\\x0EJPetStore Demo0\\x00@,"
		"H\\xB9\\xE1\\xE3\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xBE\\xA6\\xCA\\xB7\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\xBE\\xA6\\xCA\\xB7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xF2\\x01\\x02en:\\xE8\\x01\\x12Rhttps://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH\\x1A4https://petstore.octoperf.com/actions/Catalog.action\""
		"\\x0EJPetStore Demo0\\x00@.H\\xB7\\x95\\xE6\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xAB\\xBA\\xB0\\xCA\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\xAB\\xBA\\xB0\\xCA\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xBE\\xA6\\xCA\\xB7\\x90\\xB1\\xD6\\x17\\xF2\\x01\\x02en:\\x88\\x02\\x12Thttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\\x1ARhttps://petstore.octoperf.com/actions/"
		"Catalog.action?viewCategory=&categoryId=FISH\"\\x0EJPetStore Demo0\\x00@0H\\xF3\\xC7\\xE7\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\x8C\\xE0\\xA2\\xD5\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\x8C\\xE0\\xA2\\xD5\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xAB\\xBA\\xB0\\xCA\\x90\\xB1\\xD6\\x17\\xF2\\x01\\x02enh\\x01 \\x02\\xBA\\x01\\x1CFRP/oXee2YLIMfkLmkowcz5jxL0=\\x12\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\""
		"N\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xCF\\xF3\\x03\\x08\\xF1\\xF7\\x01\\x08\\x9E\\x95+\\x08\\xCD\\xBE\\x02\\x08\\xF7\\xF7\\x02\\x08\\xC7\\x87\\x03\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xC9\\x8B)\\x08\\xA1\\xDD'\\x08\\xD0\\xAF:\\x08\\x81\\xF5\\x02\\x10\\x01\\x18\\x00 \\x012\\x80\\x02v{[?5{zw ,L\"SryDsG3{;']@'eaIFC7bP$'0&(m2l(9bF; 4?lxEaSwl6_qBQQB-ZbN/0+M-DHZoAHeE(`z-%@'9_C.J~Q+,S=i.j\\\\OH$2M\\\\M}_c(>h+/4v/"
		"x\\\\v_Mt8fe+(`Y$[\\\\F7M_Cl6:2eC5\"^7iyU#Z~E6io@l${qVIMd%Tro9\\\\Hqr[ SD;i V>1S:vf]&3,\"?-wI6'wZ\\\\D>lVN#MHT>NSfRiD 9vdM-N9<|wRH3=5;RK\\\\Eq-'UKh2hge&x:-ProductionEnvironmentDefinition_1662169587667Rc\n+\\x12)8\\x00@\\x00H\\x00R\\x04\\x08\\x00\\x10\\x01`\\x0C\\x92\\x03\\x18lyoktDLeXXd1sLoCW3eyAF.1\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n"
		"\\x04\\x18\\xC7\\x87\\x03\\x10\\x01\\x18\\x00 \\x00Z\\x00b 00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:h9d5Wtg+G8FPF+E+Yg5KNQ==", 
		LAST);

	lr_end_transaction("03_SELECT_PRODUCT_ID",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("04_SELECT_ITEM_ID");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("Catalog.action_4", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.68\",\"identity\":{\"user\":{\"locale\":\"pt-BR\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEPchrdSQDUxGYAKG8fPgUebgAHG3CwfQxs2+vqEEndBuHZ61ekMI+hcnQpu3t7i5o0yyklsvn/ro3I5AWvl2V5RenyLo9eFXQGtaehw52YolQ2Fe2U80Ia6bzGKdTvd/InDHnI/ZP7T5TwnA57Jq47h/"
		"F912yr9My1XtRR748V3gKin92vqR0fhDPwximQDO7yKYAC2g3pHQXv6ZhHw2g0xvEkRsWVv52TGdGJPi6ITAR1u2ZGOkLEigl13XfOcL4HfOsVaGDW3c/NNcrJWtCnuVtjaTf/Tm+ra7tUb2McFlbRUXPQDC4B7/TWydGIiPNyJ/HgE=&p=\",\"family\":3,\"locale\":\"pt-BR\",\"osVersion\":\"10.0.23451.1000.ni_prerelease\",\"browser\":{\"internet_explorer\":\"9.11.23451.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"pt-BR\",\"name\":\"anaheim\",\"version\":\"112.0.1722.68 (Official build) \"},\""
		"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638188889594660880\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\""
		":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1\",\"ip\":\"49.12.128.248\"},\"referrer\":{\"uri\":\"https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\",\"ip\":\"49.12.128.248\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"a5b4de9f-f7d6-4f83-aa23-a2ffaa516491\",\"synchronous\":false}", 
		LAST);

	web_add_header("APIKey", 
		"70109aa3567b40e3bb8ac9e67a07b58a-b00e4868-b511-4be4-90dd-6370c812f0af-7167");

	web_add_header("Client-Id", 
		"NO_AUTH");

	web_add_header("Expect", 
		"100-continue");

	web_add_header("SDK-Version", 
		"EVT-Windows-C++-No-3.5.131.1");

	web_add_header("Tickets", 
		"\"10001\"=\"p:t=GwB2AbuEBAAUKFVEGReoCdHdlh1TorgVuqX+P2gOZgAAEJPgs08ziDWvTdKEksyFRYdAAbqTvY9uY+7eXcxA+xHycbVfFnnJWPRnFhjxENDYAx0/cASzExHjaBC2fQE293t0zY+3XVkrCqsax3AbtTy8UHt368EZwl8u9paaBvKCn/Rsd0j/8mM42YU8tEdsVDDpu6Y12heoNe3aUC+ql35HjtQiahKNcKaQkenO715TtAd3lGh5ins4vqJbALp1J+mtPa0YNjML0KoiJ78winTSCCpRRfYd445Dxs5N7MLSMC5cITusyLam8wSPqUSQv95CZl84BmKfQYFcCkboEQmfvwCdZ6ysOZqboQws9AlmLeLsWAl4xWEIkyO9a9W0lC5uTB368D8+"
		"imtIwKMtgKLlMfQHUgk2XWK0fDXXNvGUYM3ymq30xh1TkeJltyBNNrAdMHEKQZgzpKAwifguIxqdgvkMV6SxfG5pZOd/qdWypgY8YgE=&p=\"");

	web_add_header("Upload-Time", 
		"1683295475144");

	web_custom_request("1.0_4", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\xDC\\x95\\xE6\\xE4\\xB4\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		".\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro "
		"3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q\\\\\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$6d1a70b5-a1c6-4b40-b9e4-fba2625c46dc\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07SimHash0\\x00\\x91\\xC0\\xE2\\x88\\xD5\\xEF\\xCC\\xE2\\xB6\\xD4\\x01\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:04:31.974Z\\x00\rnavigationUrliKhttps://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId="
		"EST-1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xD8\\xD0\\xBE\\xE0\\xB4\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"-\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n"
		"\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qZ\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$6d1a70b5-a1c6-4b40-b9e4-fba2625c46dc\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:04"
		":31.523Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\x84\\xE1\\x8A\\xE0\\xB4\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t,"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n"
		"\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qX\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$6d1a70b5-a1c6-4b40-b9e4-fba2625c46dc\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\tIsAADUser0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:04:31.480Z\\x00\rnavigationUrliKhttps://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\\x00\\x12referUrlRejectCode0\\x00\\x00\t"
		"utc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\x84\\xE1\\x8A\\xE0\\xB4\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t+"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n"
		"\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qV\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$6d1a70b5-a1c6-4b40-b9e4-fba2625c46dc\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:04:31.480Z\\x00\r"
		"navigationUrliKhttps://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?"
		"Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xE0\\xC6\\xEC\\xDC\\xB4\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"*\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qT\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$6d1a70b5-a1c6-4b40-b9e4-fba2625c46dc\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\tIsAADUser0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:04:31.140Z\\x00\rnavigationUrliKhttps://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?"
		"Microsoft.WebBrowser.Personalization.SAN.NavigateElementClickedq\\x9C\\xAA\\xE2\\xDC\\xB4\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t)"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qR\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$09e80175-04c0-4336-a600-bd1900d0202f\\x00\\x10DOMAnchorHrefUrliKhttps://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1\\x00\\x0EDOMElementPathilA|0||;TD|1||;TR|2||;TBODY|1||;TABLE|3|"
		"|;DIV|3|Catalog|;DIV|3|Content|;BODY|2||;HTML|1||%20rnfinzz%20idc0_347\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:04:31.132Z\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		EXTRARES, 
		"Url=https://edge.microsoft.com/extensionrevocation/v1/threatListUpdates_fetch?req=ChcKBm1zZWRnZRINMTEyLjAuMTcyMi42OBobCAEQCBoNMTY4MzI2ODAyODc3MSIEIAEgAigEIgIIAQ==&ct=application/x-protobuf&key=d414dd4f9db345fa8003e32adc81b362", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("04_SELECT_ITEM_ID",LR_AUTO);

	lr_think_time(3);

	web_add_header("MS-CV", 
		"XQirHG9nRe9NYOU5HJDUsq");

	web_url("activitystatus", 
		"URL=https://edge.microsoft.com/extensiondiagnostic/v1/activitystatus?x=id%3Dadmkpobhocmdideidcndkfaeffadipkc%26v%3D2.0.1&x=id%3Dahokoikenoafgppiblgpenaaaolecifn%26v%3D1.1.13&x=id%3Dbhmhibnbialendcafinliemndanacfaj%26v%3D1.4.12&x=id%3Dblipmdconlkpinefehnmjammfjpmpbjk%26v%3D100.0.0.0&x=id%3Dbnplfnhcidhhdapmblniehfaaompjlck%26v%3D1.3&x=id%3Dcaahalkghnhbabknipmconmbicpkcopl%26v%3D0.0.0.2&x=id%3Dceaifoolopnigfpidlheoagpheiplgii%26v%3D1.4.12&x=id%3Dcjneempfhkonkkbcmnfdibgobmhbagaj%26v%3D1.5.13&x="
		"id%3Ddcaajljecejllikfgbhjdgeognacjkkp%26v%3D1.3.19&x=id%3Dddobgngkifgapahlheghhckckkcgpikf%26v%3D2.3.0&x=id%3Ddigoaejcopelkbkcbiemimccohaooggd%26v%3D6.3&x=id%3Ddknkgjgkdpkmddgdjlgdhfojlaehikmk%26v%3D23.4.2&x=id%3Ddpidllmdbfmclpenbdfjkbbipkbbadbg%26v%3D3.2.4&x=id%3Dehlmnljdoejdahfjdfobmpfancoibmig%26v%3D1.3.12&x=id%3Deijpepilkjkofamihbmjcnihgpbebafj%26v%3D1.0.10&x=id%3Dejbalbakoplchlghecdalmeeeajnimhm%26v%3D10.28.3&x=id%3Dfbgcedjacmlbgleddnoacbnijgmiolem%26v%3D2.12&x="
		"id%3Dfcbmiimfkmkkkffjlopcpdlgclncnknm%26v%3D1.11.25&x=id%3Dfclbdkbhjlgkbpfldjodgjncejkkjcme%26v%3D8.10.0&x=id%3Dfjngpfnaikknjdhkckmncgicobbkcnle%26v%3D1.1.9&x=id%3Dfkepacicchenbjecpbpbclokcabebhah%26v%3D2.3.40&x=id%3Dgbihlnbpmfkodghomcinpblknjhneknc%26v%3D1.4.9&x=id%3Dgbmdgpbipfallnflgajpaliibnhdgobh%26v%3D0.18.1&x=id%3Dgbmoeijgfngecijpcnbooedokgafmmji%26v%3D1.6.15&x=id%3Dgecfnmoodchdkebjjffmdcmeghkflpib%26v%3D1.7.29&x=id%3Dgekagaaiohabmaknhkbaofhhedhelemf%26v%3D1.4.12&x="
		"id%3Dhloomjjkinpbjldhobfkfdamkmikjmdo%26v%3D1.4.10&x=id%3Dhmlhageoffiiefnmojcgoagebofoifpl%26v%3D1.4.14&x=id%3Difoakfbpdcdoeenechcleahebpibofpc%26v%3D4.9.63&x=id%3Dinmopeiepgfljkpkidclfgbgbmfcennb%26v%3D1.0.20&x=id%3Dinomeogfingihgjfjlpeplalcfajhgai%26v%3D2.1&x=id%3Djbbplnpkjmmeebjpijfedlgcdilocofh%26v%3D3.2.3&x=id%3Djbleckejnaboogigodiafflhkajdmpcl%26v%3D1.3.5&x=id%3Djcihpcjnflelimhjjggdhhjpencddnbp%26v%3D2.0.1&x=id%3Djlipacegilfgfpgkefbjcncbfcoeecgj%26v%3D1.0.5&x="
		"id%3Dkfihiegbjaloebkmglnjnljoljgkkchm%26v%3D1.8.7&x=id%3Dkhffkadolmfbdgahbabbhipadklfmhgf%26v%3D1.5.13&x=id%3Dkjncpkplfnolibapodobnnjfgmjmiaba%26v%3D1.4.12&x=id%3Dkmojgmpmopiiagdfbilgognmlegkonbk%26v%3D1.4.13&x=id%3Dkpldbdfpngbdadafgaccakmeaoeligcl%26v%3D10&x=id%3Dljflmlehinmoeknoonhibbjpldiijjmm%26v%3D9.0.0&x=id%3Dmcgbeeipkmelnpldkobichboakdfaeon%26v%3D2.8.2&x=id%3Dmmeijimgabbpbgpdklnllpncmdofkcpn%26v%3D2.75.0.4770&x=id%3Dmnbndgmknlpdjdnjfmfcdjoegcckoikn%26v%3D6.10.62&x="
		"id%3Dndcileolkflehcjpmjnfbnaibdcgglog%26v%3D5.6.0&x=id%3Dnkbndigcebkoaejohleckhekfmcecfja%26v%3D1.6.8&x=id%3Dnlbmdekgjkajiobkcbpolefohlelfhfe%26v%3D0.7&x=id%3Dnpjkkakdacjaihjaoeliacmecofghagh%26v%3D16.4.3.1&x=id%3Dofefcgjbeghpigppfmkologfjadafddi%26v%3D1.1.5&x=id%3Doholpbloipjbbhlhohaebmieiiieioal%26v%3D3.4.7&x=id%3Dolmhchkiafniffcaiciiomfdplnmklak%26v%3D1.5.4&x=id%3Dpjhpojmiobchgmchbkekckbgeigbbaje%26v%3D1.0.1&x=id%3Dpocpnlppkickgojjlmhdmidojbmbodfm%26v%3D0.2.2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("05_ADD_TO_CART");

	web_add_header("X-AFS-CV", 
		"o+wSKvyuvhyzRlHwAC1Qup");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.23451; app=Microsoft Edge; appVer=112.0.1722.68; appChannel=stable; appInstallationId=6590404243600361798; region=BR;");

	web_add_header("X-Client-Data", 
		"CJ33ygE=");

	web_custom_request("command_6", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=h9d5Wtg%2BG8FPF%2BE%2BYg5KNQ%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t63.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x10c\\x18\\x01\"\\xD3\\x0C\n\\xE3\t\n$382da526-7f5c-4bf3-b3da-47006dc3bac6 \\x8A\\x8C\\xE8\\xE1\\xFE0(\\xDA\\x92\\xEA\\xE1\\xFE00\\xB0\\xD5\\xE1\\xE1\\xFE0:\\x0FDESKTOP-3ITN24J\\x90\\x01\\x00\\xAA\\x01\\xF1\\x08\\xBA\\xBC\\x18\\xEC\\x08\n\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\\x1A\\xCD\\x08\\x08\\xBF\\xB6\\xE2\\xBA\\x07\\x10\\xBD\\xB6\\xE2\\xBA\\x07\\x18\\x00 \\x04(\\x002\\x00:\\x83\\x01\\x12\\x1Ehttps://petstore.octoperf.com/\\x1A\\x00\"\\x0EJPetStore "
		"Demo0\\x06@\\x10H\\xA3\\xD3\\xE1\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\xFF\\x01\\xF2\\x01\\x03und:\\xB4\\x01\\x124https://petstore.octoperf.com/actions/Catalog.action\\x1A\\x1Ehttps://petstore.octoperf.com/\"\\x0EJPetStore Demo0\\x00@,"
		"H\\xB9\\xE1\\xE3\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xBE\\xA6\\xCA\\xB7\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\xBE\\xA6\\xCA\\xB7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xF2\\x01\\x02en:\\xE8\\x01\\x12Rhttps://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH\\x1A4https://petstore.octoperf.com/actions/Catalog.action\""
		"\\x0EJPetStore Demo0\\x00@.H\\xB7\\x95\\xE6\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\xAB\\xBA\\xB0\\xCA\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\xAB\\xBA\\xB0\\xCA\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xBE\\xA6\\xCA\\xB7\\x90\\xB1\\xD6\\x17\\xF2\\x01\\x02en:\\x88\\x02\\x12Thttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\\x1ARhttps://petstore.octoperf.com/actions/"
		"Catalog.action?viewCategory=&categoryId=FISH\"\\x0EJPetStore Demo0\\x00@0H\\xF3\\xC7\\xE7\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\x8C\\xE0\\xA2\\xD5\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\x8C\\xE0\\xA2\\xD5\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xAB\\xBA\\xB0\\xCA\\x90\\xB1\\xD6\\x17\\xF2\\x01\\x02en:\\x81\\x02\\x12Khttps://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId="
		"EST-1\\x1AThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-SW-01\"\\x0EJPetStore Demo0\\x00@2H\\xE9\\x8E\\xEA\\xE1\\xFE0P\\x00X\\x00`\\x00h\\x00p\\x00x\\x8E\\xEC\\x9C\\xE9\\x90\\xB1\\xD6\\x17\\xA0\\x01\\xC8\\x01\\xB0\\x01\\x00\\xC8\\x01\\x06\\xD0\\x01\\x01\\xD8\\x01\\x8E\\xEC\\x9C\\xE9\\x90\\xB1\\xD6\\x17\\xE0\\x01\\xF8\\xCB\\x8B\\xA7\\x90\\xB1\\xD6\\x17\\xE0\\x01\\x8C\\xE0\\xA2\\xD5\\x90\\xB1\\xD6\\x17\\xF2\\x01\\x02enh\\x01 \\x02\\xBA\\x01\\x1CFRP/"
		"oXee2YLIMfkLmkowcz5jxL0=\\x12\\x18h9d5Wtg+G8FPF+E+Yg5KNQ==\"N\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xCF\\xF3\\x03\\x08\\xF1\\xF7\\x01\\x08\\x9E\\x95+\\x08\\xCD\\xBE\\x02\\x08\\xF7\\xF7\\x02\\x08\\xC7\\x87\\x03\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xC9\\x8B)\\x08\\xA1\\xDD'\\x08\\xD0\\xAF:\\x08\\x81\\xF5\\x02\\x10\\x01\\x18\\x00 \\x012\\x80\\x02s;W\"&$5EXNoug3@KcYpE*h4,1y|oHeJt(y,?K4EysAcA|~Aghr*_//Z+OI%DJN{?%\"?vC"
		"<fgy!k&p.bE[Lzy1$D{C$*Hp3Pp(g(1H?}1]&7\\\\PqWm&\\\\7!,1z47=~evqi;6\"sXugPneJ5+!??J,d9QZon Y_`Gqe5|mU \"b:1!(8/-V+h3B;vLi (jlEA6*Sx(HNe\\\\Jsz,=5|~.Gt{s@4t4VMHZ=S#P7@-mX/pJ@zsPsC6\\\\QI$wkKA)7p/I}ZUs{L*:-ProductionEnvironmentDefinition_1662169587667RK\n+\\x12)8\\x00@\\x00H\\x00R\\x04\\x08\\x00\\x10\\x01`\\x0C\\x92\\x03\\x18KUYHw+v3x+Sh1WhT++bMLy.1\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\\x10\\x01\\x18\\x00 \\x00Z\\x00b "
		"00000000000000000000000000000000j\\x02\\x10\\x01r\\x1Cchr:h9d5Wtg+G8FPF+E+Yg5KNQ==", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"112\", \"Microsoft Edge\";v=\"112\", \"Not:A-Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("Cart.action", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("3_4", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/112.0.0.0 Safari/537.36 Edg/112.0.1722.68\",\"identity\":{\"user\":{\"locale\":\"pt-BR\"},\"device\":{\"id\":null,\"customId\":null,\"onlineIdTicket\":\"t=GwAWAd9tBAAUbkDrC+qm3oy79YpqR0t44MGfO1wOZgAAEPchrdSQDUxGYAKG8fPgUebgAHG3CwfQxs2+vqEEndBuHZ61ekMI+hcnQpu3t7i5o0yyklsvn/ro3I5AWvl2V5RenyLo9eFXQGtaehw52YolQ2Fe2U80Ia6bzGKdTvd/InDHnI/ZP7T5TwnA57Jq47h/"
		"F912yr9My1XtRR748V3gKin92vqR0fhDPwximQDO7yKYAC2g3pHQXv6ZhHw2g0xvEkRsWVv52TGdGJPi6ITAR1u2ZGOkLEigl13XfOcL4HfOsVaGDW3c/NNcrJWtCnuVtjaTf/Tm+ra7tUb2McFlbRUXPQDC4B7/TWydGIiPNyJ/HgE=&p=\",\"family\":3,\"locale\":\"pt-BR\",\"osVersion\":\"10.0.23451.1000.ni_prerelease\",\"browser\":{\"internet_explorer\":\"9.11.23451.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"pt-BR\",\"name\":\"anaheim\",\"version\":\"112.0.1722.68 (Official build) \"},\""
		"client\":{\"version\":281483717574665,\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"synchronousLookupUris\":\"638188889594660880\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\""
		":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1\",\"ip\":\"49.12.128.248\"},\"referrer\":{\"uri\":\"https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1\",\"ip\":\"49.12.128.248\"},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"fc818969-f6bb-4d9a-81f5-e21ebe49922e\",\"synchronous\":false}", 
		EXTRARES, 
		"Url=https://edge.microsoft.com/autofillservice/v1/pages/ChVDaHJvbWUvMTEyLjAuNTYxNS4xMzgSEAnfh7zKjxssDxIFDQKP-2gSEAkjZ-_jGnPyeBIFDXK71t8=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_header("APIKey", 
		"70109aa3567b40e3bb8ac9e67a07b58a-b00e4868-b511-4be4-90dd-6370c812f0af-7167");

	web_add_header("Client-Id", 
		"NO_AUTH");

	web_add_header("Expect", 
		"100-continue");

	web_add_header("SDK-Version", 
		"EVT-Windows-C++-No-3.5.131.1");

	web_add_header("Tickets", 
		"\"10001\"=\"p:t=GwB2AbuEBAAUKFVEGReoCdHdlh1TorgVuqX+P2gOZgAAEJPgs08ziDWvTdKEksyFRYdAAbqTvY9uY+7eXcxA+xHycbVfFnnJWPRnFhjxENDYAx0/cASzExHjaBC2fQE293t0zY+3XVkrCqsax3AbtTy8UHt368EZwl8u9paaBvKCn/Rsd0j/8mM42YU8tEdsVDDpu6Y12heoNe3aUC+ql35HjtQiahKNcKaQkenO715TtAd3lGh5ins4vqJbALp1J+mtPa0YNjML0KoiJ78winTSCCpRRfYd445Dxs5N7MLSMC5cITusyLam8wSPqUSQv95CZl84BmKfQYFcCkboEQmfvwCdZ6ysOZqboQws9AlmLeLsWAl4xWEIkyO9a9W0lC5uTB368D8+"
		"imtIwKMtgKLlMfQHUgk2XWK0fDXXNvGUYM3ymq30xh1TkeJltyBNNrAdMHEKQZgzpKAwifguIxqdgvkMV6SxfG5pZOd/qdWypgY8YgE=&p=\"");

	web_add_header("Upload-Time", 
		"1683295506764");

	web_custom_request("1.0_5", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\x92\\xF3\\x93\\x8F\\xB7\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"4\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001"
		"\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB "
		"\n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qh\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$f000b7c0-4538-4c11-8a53-6deb72636f74\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07SimHash0\\x00\\x91\\xCC\\xE7\\x8B\\xD7\\xED\\xCF\\xC2\\xB7\\xD6\\x01\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:05:03.259Z\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId="
		"EST-1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xE0\\x87\\xA6\\x8E\\xB7\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"3\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001"
		"\\x0510001i\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)"
		"\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qf\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$f000b7c0-4538-4c11-8a53-6deb72636f74\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\t"
		"Timestampi\\x182023-05-05T14:05:03.170Z\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xE0\\x87\\xF6\\x8D\\xB7\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"2\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i"
		"\tDell Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)"
		"\\x1CEVT-Windows-C++-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qd\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$f000b7c0-4538-4c11-8a53-6deb72636f74\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\tIsAADUser0\\x0C\\x00"
		"\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:05:03.129Z\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrliKhttps://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1\\x00\\x12referUrlRejectCode0\\x00\\x00\t"
		"utc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\xC0\\xEB\\xF4\\x8D\\xB7\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"1\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell "
		"Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6qb\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$f000b7c0-4538-4c11-8a53-6deb72636f74\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:05:03.129Z\\x00\r"
		"navigationUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrliKhttps://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-1\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?"
		"Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xAC\\xCE\\xB5\\x8A\\xB7\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"0\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell "
		"Inc.\\x89\\x0BVostro 3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q`\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$f000b7c0-4538-4c11-8a53-6deb72636f74\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x16\\x00\tIsAADUser0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:05:02.762Z\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I?"
		"Microsoft.WebBrowser.Personalization.SAN.NavigateElementClickedq\\xBC\\xFD\\xAA\\x8A\\xB7\\xDC\\xA6\\xDB\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t/"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\tDell Inc.\\x89\\x0BVostro "
		"3400\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:1bb64721-d91a-4fd9-9cf0-e07e202ccab8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9210.0.23451.1000.amd64fre.ni_prerelease.230428-1438\\x00\\xCB\\x19\n\\x01\\xA9fW:00064aa44998f96da0a4ae24a983fafa590900000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2023/04/30:17:07:12!3fb1cc!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$29B24CB7-FA04-47CC-8FC9-649B410624F6q^\\x89$3F78790D-9FE4-4AC7-ADC3-06B0C1A758CC\\x00\\xCB!\n\\x01i\\x06-03:00\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$6d1a70b5-a1c6-4b40-b9e4-fba2625c46dc\\x00\\x10DOMAnchorHrefUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1\\x00\\x0EDOMElementPathitA|0||Button;TD|1||;TR|12||;"
		"TBODY|1||;TABLE|1||;DIV|3|Catalog|;DIV|3|Content|;BODY|2||;HTML|1||%20yajecayf%20idc0_347\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xFE\\xEC\\xC4\\xF5\\x0E\\x00\tTimestampi\\x182023-05-05T14:05:02.754Z\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	lr_end_transaction("05_ADD_TO_CART",LR_AUTO);

	lr_think_time(3);

	return 0;
}