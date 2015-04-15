{
	'targets': [
		{
			"target_name" : "np",
			"sources" : [ "notepad.cpp" ],
			"include_dirs" : ["<!(node -e \"require('nan')\")"]
		},
	],
}