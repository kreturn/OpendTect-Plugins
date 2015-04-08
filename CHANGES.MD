# OpendTect v5+ Plugins Release Notes

## Next Release
#### ExternalAttrib
- Add "Symmetric" tag to the "ZSampMargin' JSON parameter string tag. The value of the tag is a boolean constant (True/False). If set True the UI will show a single entry box. Input sets the 'ZSampMargin.Value' array to [-Input, Input]. Default is 'ZSampMargin.Symmetric': False for which the UI displays entry boxes for both the window start and stop.

## Release 5.0.6
#### AVOAttrib
- Fix typo in UI

#### ExternalAttrib
- Add "Help" tag to JSON parameter string. The value of the tag is a url string pointing to a help page for the attribute. This is optional.
- Add "Selection" tag to JSON parameter string. The value of the tag is an object with a 'Name' (string), 'Values' (array of strings) and 'Select' (number) tags. Displays a list box labeled 'Name' with options specified in 'Values' and default selection being item number 'Select'. This is optional.

#### RSpecAttrib
- Replace window parameter with Z gate. Window parameter set from Z gate width and attribute input taken at centre of Z gate. This allows attribute extraction offset from an horizon.

## Documentation
For details please see the [documentation](http://waynegm.github.io/OpendTect-Plugin-Wiki/).

## Building and Installation

* [Build from Source](http://waynegm.github.io/OpendTect-Plugin-Wiki/en/#!pages/building-from-source.md)

* [Installation](http://waynegm.github.io/OpendTect-Plugin-Wiki/en/#!pages/installation.md)