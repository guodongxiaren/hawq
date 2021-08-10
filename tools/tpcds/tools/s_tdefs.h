/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
/* 
 * Legal Notice 
 * 
 * This document and associated source code (the "Work") is a part of a 
 * benchmark specification maintained by the TPC. 
 * 
 * The TPC reserves all right, title, and interest to the Work as provided 
 * under U.S. and international laws, including without limitation all patent 
 * and trademark rights therein. 
 * 
 * No Warranty 
 * 
 * 1.1 TO THE MAXIMUM EXTENT PERMITTED BY APPLICABLE LAW, THE INFORMATION 
 *     CONTAINED HEREIN IS PROVIDED "AS IS" AND WITH ALL FAULTS, AND THE 
 *     AUTHORS AND DEVELOPERS OF THE WORK HEREBY DISCLAIM ALL OTHER 
 *     WARRANTIES AND CONDITIONS, EITHER EXPRESS, IMPLIED OR STATUTORY, 
 *     INCLUDING, BUT NOT LIMITED TO, ANY (IF ANY) IMPLIED WARRANTIES, 
 *     DUTIES OR CONDITIONS OF MERCHANTABILITY, OF FITNESS FOR A PARTICULAR 
 *     PURPOSE, OF ACCURACY OR COMPLETENESS OF RESPONSES, OF RESULTS, OF 
 *     WORKMANLIKE EFFORT, OF LACK OF VIRUSES, AND OF LACK OF NEGLIGENCE. 
 *     ALSO, THERE IS NO WARRANTY OR CONDITION OF TITLE, QUIET ENJOYMENT, 
 *     QUIET POSSESSION, CORRESPONDENCE TO DESCRIPTION OR NON-INFRINGEMENT 
 *     WITH REGARD TO THE WORK. 
 * 1.2 IN NO EVENT WILL ANY AUTHOR OR DEVELOPER OF THE WORK BE LIABLE TO 
 *     ANY OTHER PARTY FOR ANY DAMAGES, INCLUDING BUT NOT LIMITED TO THE 
 *     COST OF PROCURING SUBSTITUTE GOODS OR SERVICES, LOST PROFITS, LOSS 
 *     OF USE, LOSS OF DATA, OR ANY INCIDENTAL, CONSEQUENTIAL, DIRECT, 
 *     INDIRECT, OR SPECIAL DAMAGES WHETHER UNDER CONTRACT, TORT, WARRANTY,
 *     OR OTHERWISE, ARISING IN ANY WAY OUT OF THIS OR ANY OTHER AGREEMENT 
 *     RELATING TO THE WORK, WHETHER OR NOT SUCH AUTHOR OR DEVELOPER HAD 
 *     ADVANCE NOTICE OF THE POSSIBILITY OF SUCH DAMAGES. 
 * 
 * Contributors:
 * Gradient Systems
 */ 
tdef s_tdefs[] = { 
{"s_brand",				"s_br", FL_NOP|FL_SOURCE_DDL,  S_BRAND_START, S_BRAND_END, S_BRAND, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_customer_address",  "s_ca", FL_SOURCE_DDL|FL_PASSTHRU,  S_CUSTOMER_ADDRESS_START, S_CUSTOMER_ADDRESS_END, S_CUSTOMER_ADDRESS, -1, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_call_center",		"s_cc", FL_SOURCE_DDL,  S_CALL_CENTER_START, S_CALL_CENTER_END, S_CALL_CENTER, -1, NULL, 0, 0, 0, 0x0, 0x02, NULL},
{"s_catalog",			"s_ct", FL_SOURCE_DDL|FL_NOP,  S_CATALOG_START, S_CATALOG_END, S_CATALOG, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_catalog_order",		"s_cord", FL_SOURCE_DDL|FL_PARENT|FL_DATE_BASED, S_CATALOG_ORDER_START, S_CATALOG_ORDER_END, S_CATALOG_ORDER, S_CATALOG_ORDER_LINEITEM, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_catalog_order_lineitem",  "s_cl", FL_SOURCE_DDL|FL_CHILD|FL_PARENT, S_CATALOG_ORDER_LINEITEM_START, S_CATALOG_ORDER_LINEITEM_END, S_CATALOG_ORDER_LINEITEM, S_CATALOG_RETURNS, NULL, 0, 0, 0, 0x0, 0x07, NULL},
{"s_catalog_page",		"s_cp", FL_SOURCE_DDL|FL_PASSTHRU,  S_CATALOG_PAGE_START, S_CATALOG_PAGE_END, S_CATALOG_PAGE, -1, NULL, 0, 0, 0, 0x0, 0x033, NULL},
{"s_catalog_promotional_item",    "s_ci", FL_NOP|FL_SOURCE_DDL, S_CATALOG_PROMOTIONAL_ITEM_START, S_CATALOG_PROMOTIONAL_ITEM_END, S_CATALOG_PROMOTIONAL_ITEM, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_catalog_returns",   "s_cr", FL_SOURCE_DDL|FL_CHILD, S_CATALOG_RETURNS_START, S_CATALOG_RETURNS_END, S_CATALOG_RETURNS, -1, NULL, 0, 0, 0, 0x0, 0x0E, NULL},
{"s_category",			"s_cg", FL_NOP|FL_SOURCE_DDL,  S_CATEGORY_START, S_CATEGORY_END, S_CATEGORY, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_class",				"s_cl", FL_NOP|FL_SOURCE_DDL,  S_CLASS_START, S_CLASS_END, S_CLASS, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_company",			"s_co", FL_NOP|FL_SOURCE_DDL,  S_COMPANY_START, S_COMPANY_END, S_COMPANY, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_customer",			"s_cu", FL_SOURCE_DDL,  S_CUSTOMER_START, S_CUSTOMER_END, S_CUSTOMER, -1, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_division",			"s_di", FL_NOP|FL_SOURCE_DDL,  S_DIVISION_START, S_DIVISION_END, S_DIVISION, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_inventory",			"s_in", FL_SOURCE_DDL|FL_DATE_BASED,  S_INVENTORY_START, S_INVENTORY_END, S_INVENTORY, -1, NULL, 0, 0, 0, 0x0, 0x07, NULL},
{"s_item",				"s_it", FL_SOURCE_DDL,  S_ITEM_START, S_ITEM_END, S_ITEM, -1, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_manager",			"s_mg", FL_NOP|FL_SOURCE_DDL,  S_MANAGER_START, S_MANAGER_END, S_MANAGER, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_manufacturer",		"s_mn", FL_NOP|FL_SOURCE_DDL,  S_MANUFACTURER_START, S_MANUFACTURER_END, S_MANUFACTURER, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_market",			"s_mk", FL_NOP|FL_SOURCE_DDL,  S_MARKET_START, S_MARKET_END, S_MARKET, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_product",			"s_pr", FL_NOP|FL_SOURCE_DDL,  S_PRODUCT_START, S_PRODUCT_END, S_PRODUCT, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_promotion",			"s_pm", FL_SOURCE_DDL|FL_PASSTHRU,  S_PROMOTION_START, S_PROMOTION_END, S_PROMOTION, -1, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_purchase",			"s_pu", FL_SOURCE_DDL|FL_PARENT|FL_DATE_BASED, S_PURCHASE_START, S_PURCHASE_END, S_PURCHASE, S_PURCHASE_LINEITEM, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_purchase_lineitem", "s_pl", FL_SOURCE_DDL|FL_CHILD|FL_PARENT, S_PURCHASE_LINEITEM_START, S_PURCHASE_LINEITEM_END, S_PURCHASE_LINEITEM, S_STORE_RETURNS, NULL, 0, 0, 0, 0x0, 0x07, NULL},
{"s_reason",			"s_re", FL_NOP|FL_SOURCE_DDL,  S_REASON_START, S_REASON_END, S_REASON, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_store",				"s_st", FL_SOURCE_DDL,  S_STORE_START, S_STORE_END, S_STORE, -1, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_store_promotional_item","s_sp",FL_NOP|FL_SOURCE_DDL,S_STORE_PROMOTIONAL_ITEM_START, S_STORE_PROMOTIONAL_ITEM_END, S_STORE_PROMOTIONAL_ITEM, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_store_returns",		"s_sr", FL_SOURCE_DDL|FL_CHILD, S_STORE_RETURNS_START, S_STORE_RETURNS_END, S_STORE_RETURNS, -1, NULL, 0, 0, 0, 0x0, 0x0E, NULL},
{"s_subcategory",		"s_ct", FL_NOP|FL_SOURCE_DDL,   S_SUBCATEGORY_START, S_SUBCATEGORY_END, S_SUBCATEGORY, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_subclass",			"s_sc", FL_NOP|FL_SOURCE_DDL,   S_SUBCLASS_START, S_SUBCLASS_END, S_SUBCLASS, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_warehouse",			"s_wh", FL_SOURCE_DDL,   S_WAREHOUSE_START, S_WAREHOUSE_END, S_WAREHOUSE, -1, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_web_order",			"s_wo", FL_SOURCE_DDL|FL_PARENT|FL_DATE_BASED, S_WEB_ORDER_START, S_WEB_ORDER_END, S_WEB_ORDER, S_WEB_ORDER_LINEITEM, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_web_order_lineitem","s_wl", FL_SOURCE_DDL|FL_CHILD|FL_PARENT, S_WEB_ORDER_LINEITEM_START, S_WEB_ORDER_LINEITEM_END, S_WEB_ORDER_LINEITEM, S_WEB_RETURNS, NULL, 0, 0, 0, 0x0, 0x07, NULL},
{"s_web_page",			"s_wp", FL_SOURCE_DDL|FL_PASSTHRU,   S_WEB_PAGE_START, S_WEB_PAGE_END, S_WEB_PAGE, -1, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_web_promotional_item","s_wi",FL_NOP|FL_SOURCE_DDL,  S_WEB_PROMOTIONAL_ITEM_START, S_WEB_PROMOTIONAL_ITEM_END, S_WEB_PROMOTIONAL_ITEM, -1, NULL, 0, 0, 0, 0x0, 0x0, NULL},
{"s_web_returns",		"s_wr", FL_SOURCE_DDL|FL_CHILD, S_WEB_RETURNS_START, S_WEB_RETURNS_END, S_WEB_RETURNS, -1, NULL, 0, 0, 0, 0x0, 0x0E, NULL},
{"s_web_site",			"s_ws", FL_SOURCE_DDL,   S_WEB_SITE_START, S_WEB_SITE_END, S_WEB_SITE, -1, NULL, 0, 0, 0, 0x0, 0x01, NULL},
{"s_zip_to_gmt",		"s_zi", FL_SOURCE_DDL|FL_VPRINT,   S_ZIPG_START, S_ZIPG_END, S_ZIPG, -1, NULL, 0, 0, 0, 0x0, 0x03, NULL},
{NULL}
};
