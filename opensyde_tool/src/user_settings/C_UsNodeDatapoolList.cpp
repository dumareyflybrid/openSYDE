//----------------------------------------------------------------------------------------------------------------------
/*!
   \file
   \brief       Project node datapool list user settings (implementation)

   Project node datapool list user settings

   \copyright   Copyright 2018 Sensor-Technik Wiedemann GmbH. All rights reserved.
*/
//----------------------------------------------------------------------------------------------------------------------

/* -- Includes ------------------------------------------------------------------------------------------------------ */
#include "precomp_headers.hpp"

#include "C_UsNodeDatapoolList.hpp"

/* -- Used Namespaces ----------------------------------------------------------------------------------------------- */
using namespace stw::opensyde_gui_logic;

/* -- Module Global Constants --------------------------------------------------------------------------------------- */

/* -- Types --------------------------------------------------------------------------------------------------------- */

/* -- Global Variables ---------------------------------------------------------------------------------------------- */

/* -- Module Global Variables --------------------------------------------------------------------------------------- */

/* -- Module Global Function Prototypes ----------------------------------------------------------------------------- */

/* -- Implementation ------------------------------------------------------------------------------------------------ */

//----------------------------------------------------------------------------------------------------------------------
/*! \brief   Default constructor
*/
//----------------------------------------------------------------------------------------------------------------------
C_UsNodeDatapoolList::C_UsNodeDatapoolList(void)
{
}

//----------------------------------------------------------------------------------------------------------------------
/*! \brief   Get current column widths

   \return
   Current column widths
*/
//----------------------------------------------------------------------------------------------------------------------
const std::vector<int32_t> & C_UsNodeDatapoolList::GetColumnWidths(void) const
{
   return this->mc_ColumnWidth;
}

//----------------------------------------------------------------------------------------------------------------------
/*! \brief   Set column widths

   \param[in] orc_ColumnWidths Last known column widths
*/
//----------------------------------------------------------------------------------------------------------------------
void C_UsNodeDatapoolList::SetColumnSizes(const std::vector<int32_t> & orc_ColumnWidths)
{
   this->mc_ColumnWidth = orc_ColumnWidths;
}
