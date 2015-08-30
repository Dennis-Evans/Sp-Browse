!abcincludefile

   omit('_endofinclude_',_spbrowsepresent_)
_spbrowsepresent_ equate(1)

  include ('abbrowse.inc'),once

! -------------------------------------------------------------------------------
! derived browse class to load a file loaded browse list from a stored procedure.
! -------------------------------------------------------------------------------
BrwSpLoadedClass class(browseclass),type,link('BrwSpLoadedClass.clw',_ABCLinkMode_),module('BrwSpLoadedClass.clw'),dll(_abcdllmode_)
fetch              procedure(byte direction),virtual,protected
reset              procedure(),virtual
resetFromFile      procedure(),virtual
resetQueue         procedure(byte resetmode),virtual
updateViewRecord   procedure(),virtual             
                 end


   _endofinclude_

! Enable Clarion INC file syntax highlighting in GitHub
! vim: set filetype=clarion: 